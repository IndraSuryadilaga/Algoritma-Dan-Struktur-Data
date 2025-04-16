int penuh()
{
    if (Tumpuk.atas == max - 1)
        return 1;
    else
        return 0;
}

void input(int data)
{
    if (kosong() == 1)
    {
        Tumpuk.atas++;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas]
             << " Masuk Ke Stack" << endl;
    }
    else if (penuh() == 0)
    {
        Tumpuk.atas++;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas]
             << " Masuk Ke Stack" << endl;
    }
    else
        cout << "Tumpukan Penuh" << endl;
}

void hapus()
{
    if (kosong() == 0)
    {
        cout << "Data Teratas Sudah Terambil\n";
        Tumpuk.atas--;
    }
    else
        cout << "Data Kosong\n";
}

void tampil()
{
    if (kosong() == 0)
    {
        for (int i = Tumpuk.atas; i >= 0; i--)
        {
            cout << "Tumpukan ke " << i << " = " << Tumpuk.data[i] << endl;
        }
    }
    else
        cout << "Tumpukan Kosong\n";
}

void bersih()
{
    Tumpuk.atas = -1;
    cout << "Tumpukan Kosong!\n";
}
