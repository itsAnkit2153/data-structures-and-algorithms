// here we try to represent in 'key-value' pair
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string, int>m;

    //insertion (there are three method to insert)

    //1
    pair<string, int>p = make_pair("babbar", 3);
    m.insert(p);
    
    //2
    pair<string, int>pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;  // 'mera' ke corresponding 1 hoga

    // what will happen jab hum same jagah fir se value store kar rahe ho
    m["mera"] = 2; // jab hum pahli baar value store karte hai to vo 'insertion' hota jab dusri baar karte hain to 'updation' hota hai


    // SEARCHING    
    //1st way to search
    cout<<m["mera"]<<endl;
    //2nd way to search
    cout<<m.at("babbar")<<endl;

    // but if we try to find which is not present

    //NOTE: why '0' show becoz ye entry based hai 'unknown: 0' dikha raha hai "key: value"
   // cout<<m.at("unknown")<<endl; // it will show 'out of range' but if we write under the line of 'cout<<m["unknown"]<<endl;' then it will show both '0'
    cout<<m["unknown"]<<endl; // but it will show '0'
    cout<<m.at("unknown")<<endl;

    cout<<"size: "<<m.size()<<endl;

    //to check presence : count() => in presence: true or 1 and Not-presence: false or 0
    cout<<m.count("bro")<<endl;

    //erase
    m.erase("love");
    cout<<"new size: "<<m.size()<<endl;

    // 1st way to access value
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl; // 'i.first' => key and 'i.second' => value
    // }

    //iterator
    unordered_map<string, int> :: iterator it = m.begin(); // 'm.begin()' or start se suru karenge
    while(it != m.end()){ // tab tak chalta rahega jab tak last me na pahuch jai
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

  // NOTE: agar ordered me chahiye to hum 'map<string, int>m' use kar sakte hai

}