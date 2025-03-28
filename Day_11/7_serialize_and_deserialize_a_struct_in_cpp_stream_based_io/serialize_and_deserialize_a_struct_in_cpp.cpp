#include <iostream>
#include <fstream>

// Note : this is an example of deserialize and serialize
// we might have to consider, isssues of endianess
// we might have to consider, reading 'floating-point data'
struct GameObject{
    int field1; // 4-bytes (int32_t)
    short field2; // 2-bytes
    bool active;
    char padding[1]; // Tip : you can put an 'interesting value' in padding to make it more meaningful

public:
    GameObject(int _field1, short _field2, bool _active) : field1(_field1), field2(_field2), active(_active){}

    // serialize function
    void Serialize(std::ostream& os) const {
        // tip : use 'sizeof' and the member name, in case you change the type later.
        os.write(reinterpret_cast<const char*>(&field1), sizeof(field1));
        os.write(reinterpret_cast<const char*>(&field2), sizeof(field2));
        os.write(reinterpret_cast<const char*>(&active), sizeof(active));
        os.write(padding, sizeof(padding));
    }

    // read a chunk of data.
    void Deserialize(std::istream& is){
        is.read(reinterpret_cast<char*>(&field1), sizeof(field1));
        is.read(reinterpret_cast<char*>(&field2), sizeof(field2));
        is.read(reinterpret_cast<char*>(&active), sizeof(active));
        is.read(padding, sizeof(padding));
    }
    // Note: You can make this a friend, if you have private member variables/functions that you need to call
    //friend std::ostream& operator<<(std::ostream& os, const GameObject& go);
};

std::ostream& operator<<(std::ostream& os, const GameObject& go){
    os << go.field1 << " " << go.field2 << " " << go.active;
    return os;
}

int main(){
    // start a new scope -- that way our std::ofstream will .close()
    {
        std::cout << "sizeof GameObject: " << sizeof(GameObject) << std::endl;
        GameObject go(50, 23, 1);
        std::cout << go << std::endl;

        // write out our text version
        std::ofstream text_file("text.txt");
        text_file << go << std::endl;

        // write out our binary version
        std::ofstream binary_file("text.bin", std::ios::binary);
        go.Serialize(binary_file);
    }

    // Second experiment , reading our binary data, and populating an empty game object
    {
        GameObject go(0,0,0);
        std::ifstream input_binary_file("text.bin", std::ios::binary);
        go.Deserialize(input_binary_file);

        std::cout << "Deserialized : " << go << std::endl;
    }

    return 0;
}

