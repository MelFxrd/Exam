#include "player.h"
#include "npc.h"
#include "enemy.h"
#include <iostream>
#include <cstdlib>
#include <vector>

int main() {
    setlocale(LC_ALL, "");

    std::cout << "����� ���������� � ��������� RPG!\n\n";

    Player player("��������");
    NPC npc("���������� ������");
    Enemy enemy1("������ ���������");
    Enemy enemy2("������ ���");
    Enemy lizardBoss("�������-�������");
    Enemy dragon("������� ������");

    std::vector<std::string> cities = { "������ �������", "������ �����" };

    int choice;

    std::cout << "�� - �������� ������� �����, ��������� ��� " << player.getName() << ".\n";
    std::cout << "������ �� � ����� �������, ��� ��� ����� ���� �����, � ����� ����� ��������, ���� �� �������� ������ �����.\n\n";

    std::cout << "� ������� �������� �������� �������. ������ ������� � ���������� ������ ����� � ������������ ��������. ���������� � �������, � ����� ���������� ������ ����.\n\n";

    std::cout << "� ���� ������, ���������� �������, ������ ������ �� ����� ������, ���������� � ����. ��� ����� ����� ������������, � �� ������ ����� ������.\n";
    std::cout << "\"����� " << player.getName() << ", ������� ������������ ������� � ������� ������ ������. ��� ����� �����, ����� ������������� ���, � � ����� � ���� ��� ����, ������� ����� ���������� ����.\"\n\n";

    std::cout << "���������� ������������ � �������� �������, ������� ������� � �����, � � ���, ��� ��� �������� ������� �������� � ���������� � ������� � �������� �������� � �������.\n";
    std::cout << "\"�� ������������, ��� ����� �������� ���� � ���� ������ ���. ����������, ��������� � �����������, �������� � �������� ����� � ����, � �� ������� ������.\"\n\n";

    std::cout << "� ���, � ������� ������ ���������, �� ��������� � ���� �����������. �� ������������� � ������ ���, ��� ���� ���������� ���������, � ����� - � �����, ��� ���������� ������� ������. ���� ������ �� ����, � �� ������������, ��� ����� ������� ���� � ���� ���.\n\n";

    int cityChoice;
    std::cout << "� ���� � �������� ����� ���� ��������� ��������� � ����������� ������� � �������� ������.\n";
    std::cout << "�� ��������� � ��������. ���� �����������?\n";
    std::cout << "1. � ���.\n";
    std::cout << "2. � ����.\n";
    std::cin >> cityChoice;

    if (cityChoice == 1) {
        std::cout << "�� ������������� � ��� � ���������� ������ �������!\n";
        cities.push_back("������ ���");
    }
    else {
        std::cout << "�� ������������� � ���� � ������ ������ �����!\n";
        cities.push_back("������ �����");
    }

    std::cout << "�� ����� ����� ����� ���������� ������ ���������! ��� ������ ������?\n";
    std::cout << "1. ��������� � ���.\n";
    std::cout << "3. ���������� ����.\n";
    std::cin >> choice;

    if (choice == 1) {
        player.performAction(enemy1);
    }
    else {
        std::cout << "�� ������� �������� �������� � ����������� ���� ����.\n\n";
    }

    std::cout << "�� ��������� � " << cities.back() << ". ��� ������ ������?\n";
    std::cout << "1. �������� �������.\n";
    std::cout << "2. ���������� �����������.\n";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "�� �������� � ������� � ���������� ��������� ����������.\n";
        std::cout << "\"�� �����, �� ���� ��������� ������ ��������. �� ��������� � ����� �������-�������, ��������������� ����-�����. ���� ���������!\"\n";
        std::cout << "�� ����������� ���������� �� �������������� � ������������� ������.\n\n";
    }

    std::cout << "� ���� � �������� ����� ���������� ��� ���� ���� - ������ ���! ��� ������ ������?\n";
    std::cout << "1. ��������� � ���.\n";
    std::cout << "3. ���������� ����.\n";
    std::cin >> choice;

    if (choice == 1) {
        player.performAction(enemy2);
    }
    else {
        std::cout << "�� ������� �������� �������� � ����������� ���� ����.\n\n";
    }

    std::cout << "����� ����� ����� ��������� �������-�������! ��� ������ ������?\n";
    std::cout << "1. ��������� � ���.\n";
    std::cout << "3. ���������� ����.\n";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "�� �������� �������-������� �����!\n";
        player.performAction(lizardBoss);
    }
    else {
        std::cout << "�� ������� �������� �������� � ����������� ���� ����.\n\n";
    }

    std::cout << "�� ��������� � �������� ����� - �������� �������! ��� ������ ������?\n";
    std::cout << "1. ������������� � ���������!\n";
    std::cout << "2. ���������� ���������� � ��������.\n";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "\n�������� ���������, �� ���������� ��������� �������!\n";
        player.performAction(dragon);
    }
    else {
        std::cout << "�� ������� ���������� ������������� � ��������. � ���������, ������ �� ������ ������� � ��������!\n";
        player.performAction(dragon);
    }

    std::cout << "�� ������� ������! ��� ���������� �� ����, � �� ���� ��������� ������.\n";

    std::cout << "�� ������������� � ���� �������, ��� ���� ��������� ��� �����. ���������� ������ ���������� ���� � ���������� ����� ����� ���������� �������.\n";

    std::cout << "� ��, ��������, ���������� ��� ����������� � ��������������. �� ����������� ���������� ����� ������ ������� � ����������� �������� ��� �� ������ ���.\n\n";

    std::cout << "������� �� ����!\n";

    return 0;
}