#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void pisz_menu();
void plansze();
void instrukcja ();
void XxX (char zadanie[10][10]);
void XVxXV (char zadanie2[15][15]);
void XXxXX (char zadanie3[20][20]);
void wpisz(char kolor, string w1, string w2, char zadanie[10][10], char t);
void wpisz2(char kolor, string w1, string w2, char zadanie2[15][15], char t);
void wpisz3(char kolor, string w1, string w2, char zadanie3[20][20], char t);
void zmien_kilka (char kolor, string w1, string w2, char zadanie[10][10], char t);
void zmien_kilka2 (char kolor, string w1, string w2, char zadanie2[15][15], char t);
void zmien_kilka3 (char kolor, string w1, string w2, char zadanie3[20][20], char t);
void zmien_jeden (char kolor, string w1, string w2, char zadanie[10][10], char t);
void zmien_jeden2 (char kolor, string w1, string w2, char zadanie2[15][15], char t);
void zmien_jeden3 (char kolor, string w1, string w2, char zadanie3[20][20], char t);
bool warunek (char zadanie[10][10], char rozwiazanie1[10][10]);
bool warunek2 (char zadanie2[15][15], char rozwiazanie2[15][15]);
bool warunek3 (char zadanie3[20][20], char rozwiazanie3[20][20]);
void wypisz_rozwiazanie(char rozwiazanie1 [10][10]);
void wypisz_rozwiazanie2(char rozwiazanie2 [15][15]);
void wypisz_rozwiazanie3(char rozwiazanie3 [20][20]);
void pomoc(char kolor, string w1, string w2, char zadanie[10][10], char t);
void pomoc2(char kolor, string w1, string w2, char zadanie2[15][15], char t);
void pomoc3(char kolor, string w1, string w2, char zadanie3[20][20], char t);
bool sprawdz(int w);
bool sprawdz2(int w);
bool sprawdz3(int w);

int main()
{

    int wybor;
    pisz_menu();
    char kolor;
    string w1, w2;
    char t = -2;
    char zadanie [10][10] = {
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    };

    char zadanie2 [15][15] = {
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#','#', '#', '#', '#'  },
    };

    char zadanie3 [20][20] = {
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    { '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#' },
    };

    char rozwiazanie1 [10][10] = {
    { ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ' },
    { ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ' },
    { ' ', ' ', ' ', ' ', t, t,' ', ' ', ' ', ' ' },
    { ' ', ' ', ' ', t, ' ', ' ',t, ' ', ' ', ' ' },
    { ' ', ' ', t, t, t, t,t, t, ' ', ' ' },
    { ' ', ' ', t, ' ', ' ', ' ',' ', t, ' ', ' ' },
    { ' ', ' ', t, ' ', ' ', ' ',' ', t, ' ', ' ' },
    { ' ', ' ', t, ' ', t,t,' ', t, ' ', ' ' },
    { ' ', ' ', t, t, t, t,t, t, ' ', ' ' },
    { ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ' },
    };

    char rozwiazanie2 [15][15] = {
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    { ' ', ' ', ' ', ' ',  t ,  t ,  t , ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    { ' ', ' ', ' ',  t ,  t ,  t ,  t ,  t , ' ', ' ', ' ',  t , ' ', ' ', ' '},
    { ' ', ' ', ' ', ' ',  t ,  t ,  t , ' ', ' ', ' ',  t , ' ',  t , ' ', ' '},
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ',  t , ' '},
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ',  t , ' ',  t , ' '},
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t ,  t ,  t , ' ', ' '},
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' '},
    { ' ', ' ',  t ,  t ,  t ,  t ,  t , ' ', ' ', ' ', ' ',  t , ' ', ' ', ' '},
    { ' ',  t , ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ',  t , ' ', ' ', ' '},
    {  t ,  t ,  t , ' ', ' ', ' ',  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t },
    {  t ,  t ,  t , ' ', ' ',  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' '},
    {  t ,  t , ' ', ' ',  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' ', ' '},
    {  t , ' ', ' ',  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' ', ' ', ' '},
    { ' ', ' ',  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' ', ' ', ' ', ' '},
    };

    char rozwiazanie3 [20][20] = {
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '  },
    { ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ', ' '  },
    { ' ', ' ', ' ',  t ,  t ,  t , ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ',  t , ' ', ' ', ' ', ' ', ' '  },
    { ' ', ' ',  t ,  t ,  t ,  t ,  t , ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ',  t , ' ', ' ', ' ', ' '  },
    { ' ', ' ', ' ',  t ,  t ,  t , ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ',  t , ' ', ' ', ' ', ' ', ' '  },
    { ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ', ' '  },
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ', ' '  },
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ', ' '  },
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ', ' '  },
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ', ' '  },
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ',  t , ' ', ' ', ' ', ' '  },
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ', ' '  },
    { ' ',  t , ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ', ' ',  t ,  t ,  t , ' ', ' ', ' ', ' ', ' '  },
    {  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' ', ' ', ' ',  t ,  t ,  t , ' ', ' ', ' ', ' ', ' '  },
    { ' ',  t , ' ', ' ', ' ',  t , ' ', ' ', ' ', ' ', ' ',  t ,  t ,  t ,  t ,  t , ' ', ' ', ' ', ' '  },
    {  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' ', ' ',  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t   },
    {  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' ', ' ',  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' '  },
    {  t ,  t ,  t ,  t ,  t ,  t ,  t , ' ', ' ',  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' ', ' '  },
    {  t ,  t ,  t ,  t ,  t ,  t , ' ', ' ',  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' ', ' ', ' '  },
    {  t ,  t ,  t ,  t ,  t , ' ', ' ',  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t ,  t , ' ', ' ', ' ', ' '  },
    };
    do
    {
        cin >> wybor;
        system("cls");
        switch(wybor)
        {
            case 1:
                    plansze();
                    cin >> wybor;
                    system("cls");
                    switch (wybor)
                        {
                            case 1:
                                    do
                                    {
                                    XxX(zadanie);
                                    wpisz(kolor,w1,w2,zadanie,t);
                                    }
                                    while (!warunek(zadanie,rozwiazanie1));
                                    cout << "Rozwiazano obrazek";
                                    wypisz_rozwiazanie(rozwiazanie1);
                                    break;
                            case 2:
                                    do
                                    {
                                    XVxXV(zadanie2);
                                    wpisz2(kolor,w1,w2,zadanie2,t);
                                    }
                                    while (!warunek2(zadanie2,rozwiazanie2));
                                    cout << "Rozwiazano obrazek";
                                    wypisz_rozwiazanie2(rozwiazanie2);
                                    break;
                            case 3:
                                    do
                                    {
                                    XXxXX(zadanie3);
                                    wpisz3(kolor,w1,w2,zadanie3,t);
                                    }
                                    while (!warunek3(zadanie3,rozwiazanie3));
                                    cout << "Rozwiazano obrazek";
                                    wypisz_rozwiazanie3(rozwiazanie3);
                                    break;
                            case 4:
                                    pisz_menu();
                                    break;
                        }
                    break;
            case 2:
                    instrukcja();
                    break;
            case 4:
                    pisz_menu();
                    break;
        }
    }
    while (wybor != 3);

    return 0;
}

void wpisz(char kolor, string w1, string w2, char zadanie[10][10], char t)
{
    cout << "Podaj wspolrzedne" << endl;
    cin >> w1;
    if (w1 == "?")
    {
        pomoc(kolor,w1,w2,zadanie,t);
    } else if (w1 == "zakoncz")
    {
        exit (0);
    }
    else
    {
        cout << "Podaj kolor" << endl;
        cin >> kolor;
        int k = kolor;
        if (w1.length() > 2)
        {
            zmien_kilka(kolor,w1,w2,zadanie,t);
        } else
        {
            zmien_jeden(kolor,w1,w2,zadanie,t);
        }
    }
    system("cls");
}
void wpisz2(char kolor, string w1, string w2, char zadanie2[15][15], char t)
{
    cout << "Podaj wspolrzedne" << endl;
    cin >> w1;
    if (w1 == "?")
    {
        pomoc2(kolor,w1,w2,zadanie2,t);
    } else if (w1 == "zakoncz")
    {
        exit (0);
    }
    else
    {
        cout << "Podaj kolor" << endl;
        cin >> kolor;
        int k = kolor;
        if (w1.length() > 2)
        {
            zmien_kilka2(kolor,w1,w2,zadanie2,t);
        } else
        {
            zmien_jeden2(kolor,w1,w2,zadanie2,t);
        }
    }
    system("cls");
}
void wpisz3(char kolor, string w1, string w2, char zadanie3[20][20], char t)
{
    cout << "Podaj wspolrzedne" << endl;
    cin >> w1;
    if (w1 == "?")
    {
        pomoc3(kolor,w1,w2,zadanie3,t);
    } else if (w1 == "zakoncz")
    {
        exit (0);
    }
    else
    {
        cout << "Podaj kolor" << endl;
        cin >> kolor;
        int k = kolor;
        if (w1.length() > 2)
        {
            zmien_kilka3(kolor,w1,w2,zadanie3,t);
        } else
        {
            zmien_jeden3(kolor,w1,w2,zadanie3,t);
        }
    }
    system("cls");
}
void pisz_menu()
{
    cout << "Obrazki monochromatyczne" << endl;
    cout << setw(24) << "----------Menu----------" << endl;
    cout << "1. Wybierz gre" << endl;
    cout << "2. Instrukcja" << endl;
    cout << "3. Wylacz gre" << endl;
}
void plansze()
{
    cout << setw(24) << "-----Wybierz plansze:----" << endl;
    cout << "1. 10x10" << endl;
    cout << "2. 15x15" << endl;
    cout << "3. 20x20" << endl;
    cout << "4. Powrot" << endl;
}
void instrukcja ()
{
    cout << setw(24) << "-------Instrukcja:------" << endl;
    cout << setw(50) << "Gra polega na odgadnieciu ukrytego obrazka.\nLiczby w kazdym wierszy i kolumnie informuja o ciagach pol zamalowanych, \nprzedzielonych co najmniej jednym polem bialym.\nW przypadku chec zamiany jednego elementu komenda wyglada nastepujaco:\naa (lub AA) ENTER kolor (x - pole zamalowane, o - pole puste, # - nieznany kolor)\nW przypadku zamiany wielu pol:\naa-aa (lub AA-AA) ENTER kolor" << endl;
    cout << "4. Powrot" << endl;
}
void XxX (char zadanie[10][10])
{
    char pustka[4][4] = {
    {' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' '},
    };

    char pion [4][10] = {
     { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
     { ' ', ' ', ' ', ' ', '1', '1',' ', ' ', ' ', ' '},
     {' ', ' ', ' ', '2', '1', '1','2', ' ', ' ', ' '},
     {'0', '0', '5', '1', '2', '2','1', '5', '0', '0'},
    };

    char poziom [10][4] = {
    {'A', ' ', ' ', '0' },
    {'B', ' ', ' ', '0' },
    {'C', ' ', ' ', '2' },
    {'D', ' ', '1', '1' },
    {'E', ' ', ' ', '6' },
    {'F', ' ', ' ', '6' },
    {'G', ' ', '1', '1' },
    {'H', ' ', ' ', '2' },
    {'I', ' ', ' ', '0' },
    {'J', ' ', ' ', '0' },
    };

    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {
            if (i < 4 && j < 4)
                {
                    cout << pustka[i][j];
                }
            else if (i < 4 && j > 3)
                {
                    if ((j+1)%5==0)
                    {
                        cout << " ";
                        cout << pion[i][j-4];
                    } else if((j-4)==9)
                    {
                        cout << pion[i][j-4];
                        cout << " ";
                    } else
                    {
                        cout << pion[i][j-4];
                    }
                }
            else if (i > 3 && j < 4)
                {
                    if ((i-4)%5==0 && j==0)
                    {
                        cout << "    -------------" << endl;
                        cout << poziom[i-4][j];
                    }
                    else
                    {
                        cout << poziom[i-4][j];
                    }

                }
            else if (i > 3 && j > 3)
                {
                    if ((j-4)%5==00)
                    {
                        cout << "|";
                        cout << zadanie[i-4][j-4];
                    } else if((j-4)==9)
                    {
                        if ((i-4)==9)
                        {
                            cout << zadanie[i-4][j-4];
                            cout << "|" << endl;
                            cout << "    -------------";
                        } else
                            cout << zadanie[i-4][j-4];
                            if ((i-4) == 9 && (j-4) == 9)
                            {

                            } else
                            {
                                cout << "|";
                            }

                        }
                    else
                    {
                        cout << zadanie[i-4][j-4];
                    }
                }
         if (j == 13)
         {
             cout << endl;
         }
        }
    }

}
void XVxXV (char zadanie2[15][15])
{
    char pustka[4][4] = {
    {' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' '},
    };

    char pion [4][15] = {
     { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'},
     { ' ', ' ', '1', '1', '3', '3', '3', ' ', ' ', ' ', '1', ' ', '1', ' ', ' '},
     { ' ', ' ', '2', '1', '1', '1', '1', '1', ' ', '2', '1', '1', '1', '2', ' '},
     { '4', '4', '1', '2', '3', '4', '5', '6', '5', '5', '5', '9', '3', '2', '1'},
    };

    char poziom [15][4] = {
    {'A', ' ', ' ', '0' },
    {'B', ' ', ' ', '3' },
    {'C', ' ', '4', '1' },
    {'D', '3', '1', '1' },
    {'E', ' ', '1', '1' },
    {'F', '1', '1', '1' },
    {'G', ' ', ' ', '3' },
    {'H', ' ', ' ', '1' },
    {'I', ' ', '5', '1' },
    {'J', '1', '1', '1' },
    {'K', ' ', '3', '9' },
    {'L', ' ', '3', '9' },
    {'M', ' ', '2', '9' },
    {'N', ' ', '1', '9' },
    {'O', ' ', ' ', '9' },
    };

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            if (i < 4 && j < 4)
                {
                    cout << pustka[i][j];
                }
            else if (i < 4 && j > 3)
                {
                    if ((j-4)%5==0)
                    {
                        cout << " ";
                        cout << pion[i][j-4];
                    } else if((j-4)==14)
                    {
                        cout << pion[i][j-4];
                        cout << " ";
                    } else
                    {
                        cout << pion[i][j-4];
                    }
                }
            else if (i > 3 && j < 4)
                {
                    if ((i-4)%5==0 && j==0)
                    {
                        cout << "    -------------------" << endl;
                        cout << poziom[i-4][j];
                    }
                    else
                    {
                        cout << poziom[i-4][j];
                    }

                }
            else if (i > 3 && j > 3)
                {
                    if ((j-4)%5==00)
                    {
                        cout << "|";
                        cout << zadanie2[i-4][j-4];
                    } else if((j-4)==14)
                    {
                        if ((i-4)==14)
                        {
                            cout << zadanie2[i-4][j-4];
                            cout << "|" << endl;
                            cout << "    -------------------";
                        } else
                            cout << zadanie2[i-4][j-4];
                            if ((i-4) == 14 && (j-4) == 14)
                            {

                            } else
                            {
                                cout << "|";
                            }

                        }
                    else
                    {
                        cout << zadanie2[i-4][j-4];
                    }
                }
         if (j == 18)
         {
             cout << endl;
         }
        }
    }

}
void XXxXX (char zadanie3[20][20])
{
    char pustka[4][4] = {
    {' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' '},
    };

    char pion [4][20] = {
     { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'},
     { ' ', ' ', '1', ' ', '5', ' ', '1', ' ', '1', ' ', ' ', '1', '1', '1', '1', '1', ' ', ' ', ' ', ' '},
     { '1', ' ', '1', '3', '1', '3', '1', '5', '1', ' ', ' ', '1', '1', '5', '1', '1', ' ', ' ', ' ', ' '},
     { '5', '8', '5', '8', '5', '7', '3', '1', '2', '3', '4', '6', '8', '9', '8', '6', '4', '3', '2', '1'},
    };

    char poziom [20][4] = {
    {'A', ' ', '1', '1' },
    {'B', ' ', '1', '1' },
    {'C', '3', '1', '1' },
    {'D', '5', '1', '1' },
    {'E', '3', '1', '1' },
    {'F', ' ', '1', '1' },
    {'G', ' ', ' ', '1' },
    {'H', ' ', ' ', '1' },
    {'I', ' ', ' ', '1' },
    {'J', ' ', ' ', '1' },
    {'K', ' ', '1', '1' },
    {'L', ' ', ' ', '1' },
    {'M', '1', '1', '3' },
    {'N', ' ', '9', '3' },
    {'O', '1', '1', '5' },
    {'P', ' ', '9', '9' },
    {'Q', ' ', '8', '9' },
    {'R', ' ', '7', '9' },
    {'S', ' ', '6', '9' },
    {'T', ' ', '5', '9' },
    };

    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            if (i < 4 && j < 4)
                {
                    cout << pustka[i][j];
                }
            else if (i < 4 && j > 3)
                {
                    if ((j-4)%5==0)
                    {
                        cout << " ";
                        cout << pion[i][j-4];
                    } else if((j-4)==19)
                    {
                        cout << pion[i][j-4];
                        cout << " ";
                    } else
                    {
                        cout << pion[i][j-4];
                    }
                }
            else if (i > 3 && j < 4)
                {
                    if ((i-4)%5==0 && j==0)
                    {
                        cout << "    -------------------------" << endl;
                        cout << poziom[i-4][j];
                    }
                    else
                    {
                        cout << poziom[i-4][j];
                    }

                }
            else if (i > 3 && j > 3)
                {
                    if ((j-4)%5==00)
                    {
                        cout << "|";
                        cout << zadanie3[i-4][j-4];
                    } else if((j-4)==19)
                    {
                        if ((i-4)==19)
                        {
                            cout << zadanie3[i-4][j-4];
                            cout << "|" << endl;
                            cout << "    -------------------------";
                        } else
                            cout << zadanie3[i-4][j-4];
                            if ((i-4) == 19 && (j-4) == 19)
                            {

                            } else
                            {
                                cout << "|";
                            }

                        }
                    else
                    {
                        cout << zadanie3[i-4][j-4];
                    }
                }
         if (j == 23)
         {
             cout << endl;
         }
        }
    }

}
void zmien_kilka (char kolor, string w1, string w2, char zadanie[10][10], char t)
{
        int w11 = w1[0];
        int w12 = w1[1];
        int w21 = w1[3];
        int w22 = w1[4];

        if (kolor == 88 | kolor == 120 | kolor == 79 | kolor == 111 | kolor == 35)
        {
            if (!sprawdz(w11))
            {
                cout << "Niewlasciwa pierwsza wspolrzedna" << endl;
                wpisz(kolor,w1,w2,zadanie,t);
            }
            else if (!sprawdz(w12))
            {
                cout << "Niewlasciwa pierwsza wspolrzedna" << endl;
                wpisz(kolor,w1,w2,zadanie,t);
            }
            else if (!sprawdz(w21))
            {
                cout << "Niewlasciwa druga wspolrzedna" << endl;
                wpisz(kolor,w1,w2,zadanie,t);
            }
            else if (!sprawdz(w22))
            {
                cout << "Niewlasciwa druga wspolrzedna" << endl;
                wpisz(kolor,w1,w2,zadanie,t);
            }
            else if (kolor == 88 | kolor == 120)
            {
                int dlugosc1 = w21-w11;
                int dlugosc2 = w22-w12;
                if (dlugosc1 == 0)
                    {
                    for (int i = 0; i <dlugosc2+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie[w11-65][w12-65+i] = t;
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie[w11-97][w12-97+i] = t;
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie[w11-65][w12-97+i] = t;
                        } else
                        {
                            zadanie[w11-97][w12-65+i] = t;
                        }
                    }
                } else
                {
                    for (int i = 0; i <dlugosc1+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie[w11-65+i][w12-65] = t;
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie[w11-97+i][w12-97] = t;
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie[w11-65+i][w12-97] = t;
                        } else
                        {
                            zadanie[w11-97+i][w12-65] = t;
                        }
                    }
                }
            } else if (kolor == 35)
            {
                int dlugosc1 = w21-w11;
                int dlugosc2 = w22-w12;
                if (dlugosc1 == 0)
                    {
                    for (int i = 0; i <dlugosc2+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie[w11-65][w12-65+i] = '#';
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie[w11-97][w12-97+i] = '#';
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie[w11-65][w12-97+i] = '#';
                        } else
                        {
                            zadanie[w11-97][w12-65+i] = '#';
                        }
                    }
                } else
                {
                    for (int i = 0; i <dlugosc1+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie[w11-65+i][w12-65] = '#';
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie[w11-97+i][w12-97] = '#';
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie[w11-65+i][w12-97] = '#';
                        } else
                        {
                            zadanie[w11-97+i][w12-65] = '#';
                        }
                    }
                }
            }
            else if (kolor == 79 | kolor == 111)
            {
            int dlugosc1 = w21-w11;
            int dlugosc2 = w22-w12;
            if (dlugosc1 == 0)
            {
                for (int i = 0; i <dlugosc2+1; i++)
                {
                    if (w11 < 96 && w12 < 96)
                    {
                        zadanie[w11-65][w12-65+i] = ' ';
                    } else if (w11 > 96 && w12 > 96)
                    {
                        zadanie[w11-97][w12-97+i] = ' ';
                    } else if (w11 < 96 && w12 > 96)
                    {
                        zadanie[w11-65][w12-97+i] = ' ';
                    } else
                    {
                        zadanie[w11-97][w12-65+i] = ' ';
                    }
                }
            }
            else
            {
                for (int i = 0; i <dlugosc1+1; i++)
                {
                    if (w11 < 96 && w12 < 96)
                    {
                        zadanie[w11-65+i][w12-65] = ' ';
                    } else if (w11 > 96 && w12 > 96)
                    {
                        zadanie[w11-97+i][w12-97] = ' ';
                    } else if (w11 < 96 && w12 > 96)
                    {
                        zadanie[w11-65+i][w12-97] = ' ';
                    } else
                    {
                        zadanie[w11-97+i][w12-65] = ' ';
                    }

                }
            }

        }
}
else
        {
            cout << "Niewlasciwy kolor" << endl;
            wpisz(kolor,w1,w2,zadanie,t);
        }
}
void zmien_jeden (char kolor, string w1, string w2, char zadanie[10][10], char t)
 {
        int w11 = w1[0];
        int w12 = w1[1];

        if (kolor == 88 | kolor == 120 | kolor == 79 | kolor == 111 | kolor == 35)
        {
            if (!sprawdz(w11))
            {
                cout << "Niewlasciwa wspolrzedna" << endl;
                wpisz(kolor,w1,w2,zadanie,t);
            }
            else if (!sprawdz(w12))
            {
                cout << "Niewlasciwa wspolrzedna" << endl;
                wpisz(kolor,w1,w2,zadanie,t);
            }
            else if (kolor == 88 | kolor == 120)
            {
                if (w11 < 96 && w12 < 96)
                {
                    zadanie[w11-65][w12-65] = t;
                } else if (w11 > 96 && w12 > 96)
                {
                    zadanie[w11-97][w12-97] = t;
                } else if (w11 < 96 && w12 > 96)
                {
                    zadanie[w11-65][w12-97] = t;
                } else
                {
                    zadanie[w11-97][w12-65] = t;
                }
            } else if (kolor == 35)
            {
                if (w11 < 96 && w12 < 96)
                {
                    zadanie[w11-65][w12-65] = '#';
                } else if (w11 > 96 && w12 > 96)
                {
                    zadanie[w11-97][w12-97] = '#';
                } else if (w11 < 96 && w12 > 96)
                {
                    zadanie[w11-65][w12-97] = '#';
                } else
                {
                    zadanie[w11-97][w12-65] = '#';
                }
            }
            else
            {
                if (w11 < 96 && w12 < 96)
                {
                    zadanie[w11-65][w12-65] = ' ';
                } else if (w11 > 96 && w12 > 96)
                {
                    zadanie[w11-97][w12-97] = ' ';
                } else if (w11 < 96 && w12 > 96)
                {
                    zadanie[w11-65][w12-97] = ' ';
                } else
                {
                    zadanie[w11-97][w12-65] = ' ';
                }
            }
        } else
        {
            cout << "Niewlasciwy kolor" << endl;
            wpisz(kolor,w1,w2,zadanie,t);
        }
}
void zmien_kilka2 (char kolor, string w1, string w2, char zadanie2[15][15], char t)
{
        int w11 = w1[0];
        int w12 = w1[1];
        int w21 = w1[3];
        int w22 = w1[4];

        if (kolor == 88 | kolor == 120 | kolor == 79 | kolor == 111 | kolor == 351)
        {
            if (!sprawdz2(w11))
            {
                cout << "Niewlasciwa pierwsza wspolrzedna" << endl;
                wpisz2(kolor,w1,w2,zadanie2,t);
            }
            else if (!sprawdz2(w12))
            {
                cout << "Niewlasciwa pierwsza wspolrzedna" << endl;
                wpisz2(kolor,w1,w2,zadanie2,t);
            }
            else if (!sprawdz2(w21))
            {
                cout << "Niewlasciwa druga wspolrzedna" << endl;
                wpisz2(kolor,w1,w2,zadanie2,t);
            }
            else if (!sprawdz2(w22))
            {
                cout << "Niewlasciwa druga wspolrzedna" << endl;
                wpisz2(kolor,w1,w2,zadanie2,t);
            }
            else if (kolor == 88 | kolor == 120)
            {
                int dlugosc1 = w21-w11;
                int dlugosc2 = w22-w12;
                if (dlugosc1 == 0)
                    {
                    for (int i = 0; i <dlugosc2+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie2[w11-65][w12-65+i] = t;
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie2[w11-97][w12-97+i] = t;
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie2[w11-65][w12-97+i] = t;
                        } else
                        {
                            zadanie2[w11-97][w12-65+i] = t;
                        }
                    }
                } else
                {
                    for (int i = 0; i <dlugosc1+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie2[w11-65+i][w12-65] = t;
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie2[w11-97+i][w12-97] = t;
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie2[w11-65+i][w12-97] = t;
                        } else
                        {
                            zadanie2[w11-97+i][w12-65] = t;
                        }
                    }
                }
            } else if (kolor == 35)
            {
                int dlugosc1 = w21-w11;
                int dlugosc2 = w22-w12;
                if (dlugosc1 == 0)
                    {
                    for (int i = 0; i <dlugosc2+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie2[w11-65][w12-65+i] = '#';
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie2[w11-97][w12-97+i] = '#';
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie2[w11-65][w12-97+i] = '#';
                        } else
                        {
                            zadanie2[w11-97][w12-65+i] = '#';
                        }
                    }
                } else
                {
                    for (int i = 0; i <dlugosc1+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie2[w11-65+i][w12-65] = '#';
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie2[w11-97+i][w12-97] = '#';
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie2[w11-65+i][w12-97] = '#';
                        } else
                        {
                            zadanie2[w11-97+i][w12-65] = '#';
                        }
                    }
                }
            }
            else if (kolor == 79 | kolor == 111)
            {
            int dlugosc1 = w21-w11;
            int dlugosc2 = w22-w12;
            if (dlugosc1 == 0)
            {
                for (int i = 0; i <dlugosc2+1; i++)
                {
                    if (w11 < 96 && w12 < 96)
                    {
                        zadanie2[w11-65][w12-65+i] = ' ';
                    } else if (w11 > 96 && w12 > 96)
                    {
                        zadanie2[w11-97][w12-97+i] = ' ';
                    } else if (w11 < 96 && w12 > 96)
                    {
                        zadanie2[w11-65][w12-97+i] = ' ';
                    } else
                    {
                        zadanie2[w11-97][w12-65+i] = ' ';
                    }
                }
            }
            else
            {
                for (int i = 0; i <dlugosc1+1; i++)
                {
                    if (w11 < 96 && w12 < 96)
                    {
                        zadanie2[w11-65+i][w12-65] = ' ';
                    } else if (w11 > 96 && w12 > 96)
                    {
                        zadanie2[w11-97+i][w12-97] = ' ';
                    } else if (w11 < 96 && w12 > 96)
                    {
                        zadanie2[w11-65+i][w12-97] = ' ';
                    } else
                    {
                        zadanie2[w11-97+i][w12-65] = ' ';
                    }

                }
            }

        }
}
else
        {
            cout << "Niewlasciwy kolor" << endl;
            wpisz2(kolor,w1,w2,zadanie2,t);
        }
}
void zmien_jeden2 (char kolor, string w1, string w2, char zadanie2[15][15], char t)
 {
        int w11 = w1[0];
        int w12 = w1[1];

        if (kolor == 88 | kolor == 120 | kolor == 79 | kolor == 111 | kolor == 35)
        {
            if (!sprawdz2(w11))
            {
                cout << "Niewlasciwa wspolrzedna" << endl;
                wpisz2(kolor,w1,w2,zadanie2,t);
            } else if (!sprawdz2(w12))
            {
                cout << "Niewlasciwa wspolrzedna" << endl;
                wpisz2(kolor,w1,w2,zadanie2,t);
            } else if (kolor == 88 | kolor == 120)
            {
                if (w11 < 96 && w12 < 96)
                {
                    zadanie2[w11-65][w12-65] = t;
                } else if (w11 > 96 && w12 > 96)
                {
                    zadanie2[w11-97][w12-97] = t;
                } else if (w11 < 96 && w12 > 96)
                {
                    zadanie2[w11-65][w12-97] = t;
                } else
                {
                    zadanie2[w11-97][w12-65] = t;
                }
            } else if (kolor == 35)
            {
                if (w11 < 96 && w12 < 96)
                {
                    zadanie2[w11-65][w12-65] = '#';
                } else if (w11 > 96 && w12 > 96)
                {
                    zadanie2[w11-97][w12-97] = '#';
                } else if (w11 < 96 && w12 > 96)
                {
                    zadanie2[w11-65][w12-97] = '#';
                } else
                {
                    zadanie2[w11-97][w12-65] = '#';
                }
            }
             else
            {
                if (w11 < 96 && w12 < 96)
                {
                    zadanie2[w11-65][w12-65] = ' ';
                } else if (w11 > 96 && w12 > 96)
                {
                    zadanie2[w11-97][w12-97] = ' ';
                } else if (w11 < 96 && w12 > 96)
                {
                    zadanie2[w11-65][w12-97] = ' ';
                } else
                {
                    zadanie2[w11-97][w12-65] = ' ';
                }
            }
        } else
        {
            cout << "Niewlasciwy kolor" << endl;
            wpisz2(kolor,w1,w2,zadanie2,t);
        }
}
void zmien_kilka3 (char kolor, string w1, string w2, char zadanie3[20][20], char t)
{
        int w11 = w1[0];
        int w12 = w1[1];
        int w21 = w1[3];
        int w22 = w1[4];

        if (kolor == 88 | kolor == 120 | kolor == 79 | kolor == 111 | kolor == 35)
        {
            if (!sprawdz3(w11))
            {
                cout << "Niewlasciwa pierwsza wspolrzedna" << endl;
                wpisz3(kolor,w1,w2,zadanie3,t);
            }
            else if (!sprawdz3(w12))
            {
                cout << "Niewlasciwa pierwsza wspolrzedna" << endl;
                wpisz3(kolor,w1,w2,zadanie3,t);
            }
            else if (!sprawdz3(w21))
            {
                cout << "Niewlasciwa druga wspolrzedna" << endl;
                wpisz3(kolor,w1,w2,zadanie3,t);
            }
            else if (!sprawdz3(w22))
            {
                cout << "Niewlasciwa druga wspolrzedna" << endl;
                wpisz3(kolor,w1,w2,zadanie3,t);
            }
            else if (kolor == 88 | kolor == 120)
            {
                int dlugosc1 = w21-w11;
                int dlugosc2 = w22-w12;
                if (dlugosc1 == 0)
                    {
                    for (int i = 0; i <dlugosc2+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie3[w11-65][w12-65+i] = t;
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie3[w11-97][w12-97+i] = t;
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie3[w11-65][w12-97+i] = t;
                        } else
                        {
                            zadanie3[w11-97][w12-65+i] = t;
                        }
                    }
                } else
                {
                    for (int i = 0; i <dlugosc1+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie3[w11-65+i][w12-65] = t;
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie3[w11-97+i][w12-97] = t;
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie3[w11-65+i][w12-97] = t;
                        } else
                        {
                            zadanie3[w11-97+i][w12-65] = t;
                        }
                    }
                }
            } else if (kolor == 35)
            {
                int dlugosc1 = w21-w11;
                int dlugosc2 = w22-w12;
                if (dlugosc1 == 0)
                    {
                    for (int i = 0; i <dlugosc2+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie3[w11-65][w12-65+i] = '#';
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie3[w11-97][w12-97+i] = '#';
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie3[w11-65][w12-97+i] = '#';
                        } else
                        {
                            zadanie3[w11-97][w12-65+i] = '#';
                        }
                    }
                } else
                {
                    for (int i = 0; i <dlugosc1+1; i++)
                    {
                        if (w11 < 96 && w12 < 96)
                        {
                            zadanie3[w11-65+i][w12-65] = '#';
                        } else if (w11 > 96 && w12 > 96)
                        {
                            zadanie3[w11-97+i][w12-97] = '#';
                        } else if (w11 < 96 && w12 > 96)
                        {
                            zadanie3[w11-65+i][w12-97] = '#';
                        } else
                        {
                            zadanie3[w11-97+i][w12-65] = '#';
                        }
                    }
                }
            }
            else if (kolor == 79 | kolor == 111)
            {
            int dlugosc1 = w21-w11;
            int dlugosc2 = w22-w12;
            if (dlugosc1 == 0)
            {
                for (int i = 0; i <dlugosc2+1; i++)
                {
                    if (w11 < 96 && w12 < 96)
                    {
                        zadanie3[w11-65][w12-65+i] = ' ';
                    } else if (w11 > 96 && w12 > 96)
                    {
                        zadanie3[w11-97][w12-97+i] = ' ';
                    } else if (w11 < 96 && w12 > 96)
                    {
                        zadanie3[w11-65][w12-97+i] = ' ';
                    } else
                    {
                        zadanie3[w11-97][w12-65+i] = ' ';
                    }
                }
            }
            else
            {
                for (int i = 0; i <dlugosc1+1; i++)
                {
                    if (w11 < 96 && w12 < 96)
                    {
                        zadanie3[w11-65+i][w12-65] = ' ';
                    } else if (w11 > 96 && w12 > 96)
                    {
                        zadanie3[w11-97+i][w12-97] = ' ';
                    } else if (w11 < 96 && w12 > 96)
                    {
                        zadanie3[w11-65+i][w12-97] = ' ';
                    } else
                    {
                        zadanie3[w11-97+i][w12-65] = ' ';
                    }

                }
            }

        }
}
else
        {
            cout << "Niewlasciwy kolor" << endl;
            wpisz3(kolor,w1,w2,zadanie3,t);
        }
}
void zmien_jeden3 (char kolor, string w1, string w2, char zadanie3[20][20], char t)
 {
        int w11 = w1[0];
        int w12 = w1[1];

        if (kolor == 88 | kolor == 120 | kolor == 79 | kolor == 111 | kolor == 35)
        {
            if (!sprawdz3(w11))
            {
                cout << "Niewlasciwa wspolrzedna" << endl;
                wpisz3(kolor,w1,w2,zadanie3,t);
            } else if (!sprawdz3(w12))
            {
                cout << "Niewlasciwa wspolrzedna" << endl;
                wpisz3(kolor,w1,w2,zadanie3,t);
            } else if (kolor == 88 | kolor == 120)
            {
                if (w11 < 96 && w12 < 96)
                {
                    zadanie3[w11-65][w12-65] = t;
                } else if (w11 > 96 && w12 > 96)
                {
                    zadanie3[w11-97][w12-97] = t;
                } else if (w11 < 96 && w12 > 96)
                {
                    zadanie3[w11-65][w12-97] = t;
                } else
                {
                    zadanie3[w11-97][w12-65] = t;
                }
            } else if (kolor == 35)
            {
                if (w11 < 96 && w12 < 96)
                {
                    zadanie3[w11-65][w12-65] = '#';
                } else if (w11 > 96 && w12 > 96)
                {
                    zadanie3[w11-97][w12-97] = '#';
                } else if (w11 < 96 && w12 > 96)
                {
                    zadanie3[w11-65][w12-97] = '#';
                } else
                {
                    zadanie3[w11-97][w12-65] = '#';
                }
            }
            else
            {
                if (w11 < 96 && w12 < 96)
                {
                    zadanie3[w11-65][w12-65] = ' ';
                } else if (w11 > 96 && w12 > 96)
                {
                    zadanie3[w11-97][w12-97] = ' ';
                } else if (w11 < 96 && w12 > 96)
                {
                    zadanie3[w11-65][w12-97] = ' ';
                } else
                {
                    zadanie3[w11-97][w12-65] = ' ';
                }
            }
        } else
        {
            cout << "Niewlasciwy kolor" << endl;
            wpisz3(kolor,w1,w2,zadanie3,t);
        }
}
bool sprawdz(int w)
{
    if (w < 65) return false;
    if (w > 74 && w < 97) return false;
    if (w > 106) return false;

    return true;
}
bool sprawdz2(int w)
{
    if (w < 65) return false;
    if (w > 79 && w < 97) return false;
    if (w > 111) return false;

    return true;
}
bool sprawdz3(int w)
{
    if (w < 65) return false;
    if (w > 84 && w < 97) return false;
    if (w > 116) return false;

    return true;
}
bool warunek (char zadanie[10][10], char rozwiazanie1[10][10])
{
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        if (zadanie[i][j] != rozwiazanie1 [i][j])
        {
            return false;
        }
    }
}
return true;
}
bool warunek2 (char zadanie2[15][15], char rozwiazanie2[15][15])
{
for (int i = 0; i < 15; i++)
{
    for (int j = 0; j < 15; j++)
    {
        if (zadanie2[i][j] != rozwiazanie2 [i][j])
        {
            return false;
        }
    }
}
return true;
}
bool warunek3 (char zadanie3[20][20], char rozwiazanie3[20][20])
{
for (int i = 0; i < 20; i++)
{
    for (int j = 0; j < 20; j++)
    {
        if (zadanie3[i][j] != rozwiazanie3 [i][j])
        {
            return false;
        }
    }
}

return true;
}
void wypisz_rozwiazanie(char rozwiazanie1 [10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << rozwiazanie1[i][j];
            if (j == 9)
            cout << endl;
        }
    }
}
void wypisz_rozwiazanie2(char rozwiazanie2 [15][15])
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cout << rozwiazanie2[i][j];
            if (j == 14)
            cout << endl;
        }
    }
}
void wypisz_rozwiazanie3(char rozwiazanie3 [20][20])
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << rozwiazanie3[i][j];
            if (j == 19)
            cout << endl;
        }
    }
}
void pomoc(char kolor, string w1, string w2, char zadanie[10][10], char t)
{
    cout << setw(50) << "Gra polega na odgadnieciu ukrytego obrazka.\nLiczby w kazdym wierszy i kolumnie informuja o ciagach pol zamalowanych, \nprzedzielonych co najmniej jednym polem bialym.\nW przypadku chec zamiany jednego elementu komenda wyglada nastepujaco:\naa (lub AA) ENTER kolor (x - pole zamalowane, o - pole puste, # - nieznany kolor)\nW przypadku zamiany wielu pol:\naa-aa (lub AA-AA) ENTER kolor\nGra konczy sie po rozwiazaniu obrazku lub wpisaniu 'zakoncz' "<< endl;
    wpisz(kolor,w1,w2,zadanie,t);
}
void pomoc2(char kolor, string w1, string w2, char zadanie2[15][15], char t)
{
    cout << setw(50) << "Gra polega na odgadnieciu ukrytego obrazka.\nLiczby w kazdym wierszy i kolumnie informuja o ciagach pol zamalowanych, \nprzedzielonych co najmniej jednym polem bialym.\nW przypadku chec zamiany jednego elementu komenda wyglada nastepujaco:\naa (lub AA) ENTER kolor (x - pole zamalowane, o - pole puste, # - nieznany kolor)\nW przypadku zamiany wielu pol:\naa-aa (lub AA-AA) ENTER kolor\nGra konczy sie po rozwiazaniu obrazku lub wpisaniu 'zakoncz'" << endl;
    wpisz2(kolor,w1,w2,zadanie2,t);
}
void pomoc3(char kolor, string w1, string w2, char zadanie3[20][20], char t)
{
    cout << setw(50) << "Gra polega na odgadnieciu ukrytego obrazka.\nLiczby w kazdym wierszy i kolumnie informuja o ciagach pol zamalowanych, \nprzedzielonych co najmniej jednym polem bialym.\nW przypadku chec zamiany jednego elementu komenda wyglada nastepujaco:\naa (lub AA) ENTER kolor (x - pole zamalowane, o - pole puste, # - nieznany kolor)\nW przypadku zamiany wielu pol:\naa-aa (lub AA-AA) ENTER kolor\nGra konczy sie po rozwiazaniu obrazku lub wpisaniu 'zakoncz'" << endl;
    wpisz3(kolor,w1,w2,zadanie3,t);
}
