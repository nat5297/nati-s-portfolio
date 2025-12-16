/*
Name: Yohannis Mengestu ID: UGR/37990/17
Name: TEGEGN GADISA     ID: UGR/37837  UGR/17
Name: SENA GETACHEW     ID: UGR/37764  UGR/17
Name: YOHANNES GIZUWORK  ID:UGR/37995 UGR/17
Name: YOHANNES GETAHUN   ID:UGR/37997 UGR/17


*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Room {
    int number;
    string type;
    double price;
    Room* next;
};

void addRoom(Room** head);
void viewRooms(Room* head);
void searchRoom(Room* head);
void updateRoom(Room* head);
void deleteRoom(Room** head);
void saveRooms(Room* head, string filename);
void loadRooms(Room** head, string filename);

int main() {
    Room* head = NULL;
    string filename = "room.txt";
    loadRooms(&head, filename);

    int choice;
    do {
        cout << "\nMenu\n";
        cout << "-------------\n";
        cout << "1. Add Room\n2. View Rooms\n3. Search Room\n4. Update Room\n5. Delete Room\n6. Exit\n";
        cout << "Choose: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1:
                addRoom(&head);
                break;
            case 2:
                viewRooms(head);
                break;
            case 3:
                searchRoom(head);
                break;
            case 4:
                updateRoom(head);
                break;
            case 5:
                deleteRoom(&head);
                break;
            case 6:
                saveRooms(head, filename);
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while(choice != 6);

    Room* temp;
    while(head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}

void addRoom(Room** head) {
    Room* newRoom = new Room;
    cout << "Enter room number: ";
    cin >> newRoom->number;
    cin.ignore();

    // Check if number exists
    Room* temp = *head;
    while (temp != NULL) {
        if (temp->number == newRoom->number) {
            cout << "Room number already exists.\n";
            delete newRoom;
            return;
        }
        temp = temp->next;
    }

    cout << "Enter room type: ";
    getline(cin, newRoom->type);
    cout << "Enter room price: ";
    cin >> newRoom->price;
    cin.ignore();

    newRoom->next = NULL;
    if(*head == NULL) {
        *head = newRoom;
    }
    else {
        temp = *head;
        while(temp->next != NULL) temp = temp->next;
        temp->next = newRoom;
    }
    cout << "Room added.\n";
}

void viewRooms(Room* head) {
    if(head == NULL) {
        cout << "No rooms.\n";
        return;
    }
    cout << "----------------------------------------------\n";
    cout << "----------------------------------------------\n";
    cout << left << setw(10) << "Number" << setw(20) << "Type" << setw(10) << "Price" << "\n\n";
    Room* temp = head;
    while(temp != NULL) {
        cout << setw(10) << temp->number << setw(20) << temp->type << fixed << setprecision(2) << temp->price << "\n";
        temp = temp->next;
    }
    cout << "----------------------------------------------\n";
}

void searchRoom(Room* head) {
    if(head == NULL) {
        cout << "No rooms.\n";
        return;
    }
    cout << "Enter room number to search: ";
    int num;
    cin >> num;
    cin.ignore();

    Room* temp = head;
    while(temp != NULL) {
        if(temp->number == num) {
            cout << "Room found:\n";
            cout << temp->number << temp->type << fixed << setprecision(2) << temp->price << "\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Room not found.\n";
}

void updateRoom(Room* head) {
    int num;
    if(head == NULL) {
        cout << "No rooms.\n";
        return;
    }
    cout << "Enter room number to update: ";
    cin >> num;
    cin.ignore();

    Room* temp = head;
    while(temp != NULL) {
        if(temp->number == num) {
            cout << "Enter new type: ";
            getline(cin, temp->type);
            cout << "Enter new price: ";
            cin >> temp->price;
            cin.ignore();
            cout << "Room updated.\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Room not found.\n";
}

void deleteRoom(Room** head) {
    if(*head == NULL) {
        cout << "No rooms.\n";
        return;
    }
    cout << "Enter room number to delete: ";
    int num;
    cin >> num;
    cin.ignore();
    Room* temp = *head;
    Room* prev = NULL;
    while(temp != NULL) {
        if(temp->number == num) {
            if(prev == NULL) {
                *head = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;
            cout << "Room deleted.\n";
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    cout << "Room not found.\n";
}

void saveRooms(Room* head, string filename) {
    ofstream file(filename.c_str());
    if(!file) {
        cout << "Cannot save file.\n";
        return;
    }
    Room* temp = head;
    while(temp != NULL) {
        file << temp->number << "\n" << temp->type << "\n" << temp->price << "\n\n";
        temp = temp->next;
    }
    file.close();
    cout << "Rooms saved.\n";
}

void loadRooms(Room** head, string filename) {
    ifstream file(filename.c_str());
    if(!file) {
        return;
    }
    while(!file.eof()) {
        string type;
        int number;
        double price;
        file >> number;
        if(file.eof()) break;
        file.ignore();
        getline(file, type);
        file >> price;
        file.ignore();

        Room* newRoom = new Room;
        newRoom->number = number;
        newRoom->type = type;
        newRoom->price = price;
        newRoom->next = NULL;

        if(*head == NULL) {
            *head = newRoom;
        } else {
            Room* temp = *head;
            while(temp->next != NULL) temp = temp->next;
            temp->next = newRoom;
        }
    }
    file.close();
}
