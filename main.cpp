#include <iostream>

// ������� ��� ������ ������������� �������
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

    // ���� ��� ����� �������� �������
    while (true)
    {
        
        std::cout << "������� ����������� ������ �������: ";
        std::cin >> actual_size;

        std::cout << "������� ���������� ������ �������: ";
        std::cin >> logical_size;

        // ��������, ��� ���������� ������ �� ��������� �����������
        if (logical_size > actual_size) 
        {
            std::cout << "������! ���������� ������ ������� �� ����� ��������� �����������!" << std::endl;
            std::cout << std::endl;
            continue; 
        }

        // ���� ������� ���������, ������� �� �����
        break;
    }

    // �������� ������������� �������
    int* arr = new int[actual_size];

        for (int i = 0; i < logical_size; ++i) 
    {
        std::cout << "������� arr[" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "������������ ������: ";
    print_dynamic_array(arr, logical_size, actual_size);
        
    delete[] arr;

    return EXIT_SUCCESS;
}