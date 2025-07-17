#include <iostream>

using namespace std;

int main()
{
    bool ships[4][4] = {

    {0, 1, 0, 0},
    {1, 0, 0, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 1}

    };

    int NumberOfTurns = 0;
    int Hit = 0;

    while (Hit < 4) {

        int Row;
        int Column;


        cout <<"Choose a row between 1 and 4" << endl;
        cin >> Row;

        cout << endl << "Choose a column between 1 and 4" << endl;
        cin >> Column;


        if (ships[Row][Column] == 1){
            ships[Row][Column] = 0;

            cout << endl << "Target hitted" << endl << endl;
            Hit++;

        }
        else{
            cout << endl << "Missed Target" << endl;
        }

        NumberOfTurns++;

        cout << endl << "You have " << 4 - Hit << " targets left" << endl << endl;
    }

    if (Hit == 4){

        cout << endl << "You completed your target in " << NumberOfTurns << " tries" << endl << endl;
    }


}
