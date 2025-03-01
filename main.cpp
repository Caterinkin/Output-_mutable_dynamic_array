#include <iostream>

// Функция для вывода динамического массива
void print_dynamic_array(int* arr, int logical_size, int actual_size) 
{
    for (int i = 0; i < actual_size; ++i) 
    {
        if (i < logical_size)
        {
            std::cout << arr[i] << " ";
        }
        else
        {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

int main() 
{
    setlocale (LC_ALL, "rus");
    int actual_size, logical_size;

    // цикл для ввода размеров массива
    while (true)
    {
        
        std::cout << "Введите фактический размер массива: ";
        std::cin >> actual_size;

        std::cout << "Введите логический размер массива: ";
        std::cin >> logical_size;

        // Проверка, что логический размер не превышает фактический
        if (logical_size > actual_size) 
        {
            std::cout << "Ошибка! Логический размер массива не может превышать фактический!" << std::endl;
            std::cout << std::endl;
            continue; 
        }

        // Если размеры корректны, выходим из цикла
        break;
    }

    // Создание динамического массива
    int* arr = new int[actual_size];

        for (int i = 0; i < logical_size; ++i) 
    {
        std::cout << "Введите arr[" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "Динамический массив: ";
    print_dynamic_array(arr, logical_size, actual_size);
        
    delete[] arr;

    return EXIT_SUCCESS;
}