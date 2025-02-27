#include <bits/stdc++.h>

using namespace std;

int main()
{
    int NumberOfApplicants,NumberOfFreeApartment,Diffrence;
    cin >> NumberOfApplicants >> NumberOfFreeApartment >> Diffrence;
    vector<int> Applicants;
    vector<int> Apartments;
    for(int i = 0; i < NumberOfApplicants; i++)
    {
        int temp;
        cin >> temp;
        Applicants.push_back(temp);
    }
    for(int i = 0; i < NumberOfFreeApartment; i++)
    {
        int temp;
        cin >> temp;
        Apartments.push_back(temp);
    }
    sort(Apartments.begin(), Apartments.end());
    sort(Applicants.begin(), Applicants.end());

    int itr = 0, itr2 = 0, count = 0;

    while(itr < NumberOfApplicants)
    {
        while(itr2 < NumberOfFreeApartment)
        {
            if(Apartments[itr2] + Diffrence < Applicants[itr]) itr2++;
            else if(Apartments[itr2] - Diffrence > Applicants[itr]) break;
            else{
                itr2++;
                count++;
                break;
            }
        }
        itr++;

    }
    cout << count;

}