#include <iostream>
struct place {
    std::string country;
    std::string town;
    std::string street;
    int house_number;
    int flat_number;
    int index;
};
void print(place* arr) {
    std::cout << "Страна: " << arr->country << std::endl;
    std::cout << "Город: " << arr->town << std::endl;
    std::cout << "Улица: " << arr->street << std::endl;
    std::cout << "Номер дома: " << arr->house_number << std::endl;
    std::cout << "Номер квартиры: " << arr->flat_number << std::endl;
    std::cout << "Индексы: " << arr->index << std::endl;
    std::cout << std::endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    place* p_arr = new place [20];
    p_arr[0] = { "Россия","Москва","Арбат", 12 , 8 , 123456 };
    p_arr[1] = { "Россия","Ижевск","Пушкина", 59 , 143 , 953769 };
    print(&p_arr[0]);
    print(&p_arr[1]);
}