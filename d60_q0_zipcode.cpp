#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Letter{
public:
    string name; string address; string province; string district; 
    int zip;
    bool operator < (const Letter& other) const {
        if(zip!=other.zip){
            return zip<other.zip;
        }
        if(address!=other.address){
            return address<other.address;
        }
        if(district!=other.district){
            return district<other.district;
        }
        if(province!=other.province){
            return province<other.province;
        }
        
        return name<other.name;

    }
};
class ZipInfo{
    public:
    int zip;
    string province;
    string district;
    };
    void correctZipAndSortLetters(vector<ZipInfo>& zipinfo, vector<Letter>& letters) {
        map<string,int> m;
        for(int i=0;i<zipinfo.size();i++){
            m[zipinfo[i].district+zipinfo[i].province]=zipinfo[i].zip;
        }
        for(int i=0;i<letters.size();i++){
            auto it=m.find(letters[i].district+letters[i].province);
            letters[i].zip=it->second;
        } 
        sort(letters.begin(),letters.end());
    }
int main() {
    int nzip;
    cin>>nzip;
    vector<ZipInfo> zipinfo;
    for (int i = 0; i < nzip; i++) {
        ZipInfo z;
        cin>>z.zip>>z.district>>z.province;
        zipinfo.push_back(z);
        }
    int n;
    cin>>n;
    vector<Letter> letters;
    for (int i = 0; i < n; i++) {
        Letter l;
        cin>>l.name>>l.address>>l.district>>l.province>>l.zip;
        letters.push_back(l);
    }
    correctZipAndSortLetters(zipinfo, letters);
    cout<<"-------------------------------------\n";
    for (auto& l:letters) {
        cout<<l.name<<" "<<l.address<<" "<<l.district<<" "<<l.province<<" "<<l.zip<<endl;
    }
}