#include "Cord.h"
#include "Buss.h"

using namespace std;

int main()
{
    vector<vector<string> > values;
    vector<string> valueline;



    ifstream fin("1.csv");
    string item;
    for (string line; getline(fin, line); )
    {
        istringstream in(line);

        while (getline(in, item, ','))
        {
            valueline.push_back(item.c_str());
        }

        values.push_back(valueline);
        valueline.clear();
    }

    fin.close();

 

   for (size_t i = 1; i < values.size(); i++) {
        int a,b,c,d,e,f,g,h,ii,j,l,m,p,q,r,s;
        float k, n, o;
        istringstream(values[i][5]) >> a;
        istringstream(values[i][6]) >> b;
        istringstream(values[i][7]) >>c;
        istringstream(values[i][8]) >> d;
        istringstream(values[i][9]) >> e;
        istringstream(values[i][10]) >> f;
        istringstream(values[i][11]) >> g;
        istringstream(values[i][14]) >> h;
        istringstream(values[i][15]) >> ii;
        istringstream(values[i][16]) >> j;
        istringstream(values[i][17]) >> k;
        istringstream(values[i][18]) >> l;
        istringstream(values[i][19]) >> m;
        istringstream(values[i][20]) >> n;
        istringstream(values[i][21]) >> o;
        istringstream(values[i][22]) >> p;
        istringstream(values[i][25]) >> q;
        istringstream(values[i][27]) >> r;
        istringstream(values[i][29]) >> s;
        Buss bus(a, b, c, d, e, f, g, h, i, j, k, l, m, { n,o }, p, q, r, s);
        bus.print();
        cout<<"\n";
    }
 
}