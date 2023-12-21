#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string headerSong = "On the First day of Christmas,\nMy true love gave to me:";
    string presentsSong[12] = { "A partridge in a pear tree",
                                "Two turtle doves",
                                "Three French hens",
                                "Four calling birds",
                                "Five golden rings",
                                "Six geese a-laying",
                                "Seven swans a-swimming",
                                "Eight maids a-milking",
                                "Nine ladies dancing",
                                "Ten lords a-leaping",
                                "Eleven pipers piping",
                                "Twelve drummers drumming"
    };


    int days;
    cout << "Enter a day between 1 and 12 (inclusive) to print out the lines for that day:\n";
    cin >> days;

    cout << headerSong << endl;
    for (int day = 0; day < days; ++day)
    {
        if (day == (days - 1) and days != 1) cout << "And ";
        cout << presentsSong[days - day - 1] << endl;
    }
    return 0;
}