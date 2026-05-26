#include "DoublyList.hpp"

using namespace std;

int main()
{

    DoublyList<int> dlist;
    dlist.append(4);
    dlist.append(30);
    dlist.append(23);

    cout << dlist.getLength() << " ";

    cout << dlist.getElement(1) << " ";

    dlist.insert(1, 19);
    cout << dlist.getElement(1) << " ";

    dlist.remove(1);
    dlist.getLength();

    dlist.replace(2, 54);
    cout << dlist.getElement(2) << " ";

    bool found = dlist.search(54);
    cout << found << " ";

    
    DoublyList<int> list;

    cout << "Is list empty? " << (list.isEmpty() ? "Yes" : "No") << "\n";

    cout << "\nAppending 10, 20, 30...\n";
    list.append(10);
    list.append(20);
    list.append(30);

    cout << "List: " << list;
    cout << "Length: " << list.getLength() << "\n";

    cout << "\nInsert 15 at position 1" << "\n";
    list.insert(1, 15);
    cout << "List: " << list;


    cout << "\nElement at position 2: " << list.getElement(2) << "\n";

    cout << "\nReplace position 2 with 99" << "\n";
    list.replace(2, 99);
    cout << "List: " << list;


    cout << "\nSearching for 99: " << (list.search(99) ? "Found" : "Not Found") << "\n";

    cout << "Searching for 50: " << (list.search(50) ? "Found" : "Not Found") << "\n";


    cout << "\nRemove element at position 1" << "\n";
    list.remove(1);
    cout << "List: " << list;
    cout << "Length: " << list.getLength() << "\n";


    cout << "\nTesting copy constructor..." << "\n";
    DoublyList<int> copyList(list);
    cout << "Copy List: " << copyList;


    cout << "\nTesting assignment operator..." << "\n";
    DoublyList<int> anotherList;
    anotherList = list;
    cout << "Another List: " << anotherList;


    cout << "\nClearing list..." << "\n";
    list.clear();
    cout << "List: " << list;
    cout << "Is list empty? " << (list.isEmpty() ? "Yes" : "No") << "\n";

    return 0;

}