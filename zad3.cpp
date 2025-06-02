vector<string> readFile(const string filename) {
    vector<string> readen;
    ifstream file;
    file.open(filename);
    if(!file.is_open()) {
        cout<<"Nie udało się otworzyć pliku "+filename<<endl;
        return readen;
    }
    while(file.peek()!=EOF) {
        string line;
        getline(file,line);
        readen.push_back(line);
    }
    return readen;
}

int countNumbersWithZeroes(vector<string> numbers) {
    int correctNumbers = 0;
    for(unsigned int i = 0;i<numbers.size();i++) {
        int zero = 0;
        int ones = 0;
        for(unsigned int j = 0;j<numbers[i].size();j++) {
            if(numbers[i][j] == '0') zero++;
            else if(numbers[i][j] == '1') ones++;
        }
        if(zero>ones) correctNumbers++;
    }
    return correctNumbers;
}



int countDivisibleBy2(vector<string> numbers) {
    int counter = 0;
    for(string number : numbers) {
        if(number.size()>2 && number[number.size()-1] == '0') counter++;
    }
    return counter;
}


int countDivisibleBy8(vector<string> numbers) {
    int counter = 0;
    for(string number : numbers) {
        if(number.size()>4 &&
           number[number.size()-1]=='0' &&
           number[number.size()-2]=='0' &&
           number[number.size()-3]=='0') counter++;
    }
    return counter;
}
string fillWithZero(string data,int length) {
    string newstring = data;
    while(length>0) {
        newstring.insert(0,"0");
        length--;
    }
    return newstring;
}

int findMin(vector<string> data) {
    string minimum = data[0];
    int pos = 0;
    for(int i = 1;i<data.size();i++) {
        if(minimum.size()<data[i].size()) {
            minimum = fillWithZero(minimum,data[i].size()-minimum.size());
        }
        else if(minimum.size()>data[i].size()) {
            data[i] = fillWithZero(data[i],minimum.size()-data[i].size());
        }
        if(data[i]<minimum) {
            minimum = data[i];
            pos = i;
        }
    }
    pos+=1;
    return pos;
}