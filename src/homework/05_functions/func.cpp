//add include statements

#include "func.h"


//add function code here

using   std::cout,
        std::cin,
        std::tolower;


double get_gc_content(string dna) {
    float gcc = 0;
    for (int i = 0; i < dna.length(); i++) {
        if (dna[i] == 'C' || dna[i] == 'G') gcc++;
    }
    return gcc/dna.length();
}

string get_dna_complement(string dna) {
    dna = get_reverse_string(dna);
    for (int i = 0; i < dna.length(); i++) {
        if (dna[i] == 'A') dna[i] = 'T';
        else if (dna[i] == 'T') dna[i] = 'A';
        if (dna[i] == 'C') dna[i] = 'G';
        else if (dna[i] == 'G') dna[i] = 'C';
    }
    return dna;
}


string get_reverse_string(string dna)
{
    string reverse_of_dna = dna;

    for (int i= 0; i < dna.length(); i++)
    {
        if (dna[i] == 'a' || dna[i] == 'A' || dna[i] == 't' || dna[i] == 'T' || dna[i] == 'g' || dna[i] == 'G' || dna[i] == 'c' || dna[i] == 'C')
        {
            dna[i] = reverse_of_dna[(dna.length()-1) - i];
        }
    }
    return dna;
}




void main_menu()
{
    int choice;
    string dna;
    cout << "\n\nWelcome to the DNA/GC Content Program\n Please make a selection below:";
    do {
        cout << "\n\nYour Choices:\n";
        cout << "1 - Get GC Content\n";
        cout << "2 - Get DNA Complement\n";
        cout << "3 - Exit\n";
             cin >> choice;
        if (choice == 1)
            {
            cout << "Enter a DNA sequence: ";
            cin >> dna;
            cout << "The GC content of " << dna
                 << " is " << get_gc_content(dna) << "%.";
            }
        if (choice == 2)
            {
            cout << "Enter a DNA sequence: ";
            cin >> dna;
            cout << "The DNA complement of " << dna << " is: "
                 << get_dna_complement(dna);
            }
        if (choice < 1 || choice > 3)
            {
                cout << "Please make a selection";
                cout << "1 - Get GC Content\n";
                cout << "2 - Get DNA Complement\n";
                cout << "3 - Exit\n";
            }
        } while (choice != 3);
}
