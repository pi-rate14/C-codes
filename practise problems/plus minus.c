#include <iostream.h>

using namespace std;

vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    int size = sizeof(arr)/sizeof(arr[0]),i=0;
    float pctr=0.0,nctr=0.0,zctr=0.0;
    //float x;
    float pfrac=0.0,nfrac=0.0,zfrac=0.0;
    for(i=0; i<size; i++)
    {
       if(arr[i]==0)
       {
           ++zctr;
       }
       else if(arr[i]>0)
       {
            ++pctr;
       }
       else
       {
            ++nctr;
       }
    }

    float t = pctr+nctr+zctr;
    pfrac = pctr/size;
    nfrac = nctr/size;
    zfrac = zctr/size;
    cout << fixed << setprecision(6) << pfrac <<endl;
    cout << fixed << setprecision(6) << nfrac <<endl;
    cout << fixed << setprecision(6) << zfrac <<endl;/*
     x=pctr/(float)size;
    printf("%.3f",x);
    x=nctr/(float)size;
     printf("\n%.3f",x);
    x=zctr/(float)size;
     printf("\n%.3f",x);
     cout<<t;*/
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
