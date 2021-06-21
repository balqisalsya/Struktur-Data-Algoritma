#include<iostream>

using namespace std;

int main () {
     int i,j,u,v, INF = 99, nnode, start, minimum, m, min_bobot, update;

cout <<"Input jumlah vertex : ";cin>>nnode; nnode++;
int w[nnode][nnode], temp[nnode], path[nnode], prev[nnode], visited[nnode] = {0};
for (i = 1; i<nnode; i++) {
    temp[i] = INF;
    prev[i] = -1;
    path[i] = 0;
    for(int j=1; j<nnode; j++){
        w[i][j] = INF;
    }
}
for(i=1; i<nnode; i++){
    for(j= i+1; j <nnode; j++){
        cout<<"w ["<<i<<" , "<<j<<" ](99 = infinity) = ";cin>>w[i][j];
    }
    cout<<endl;
}
cout<<"vertex awal  : ";cin>>u;
cout<<"vertex akhir : ";cin>>v;

start = u;
visited[start] = 1;
temp[start] = 0;

while(visited[v] == 0){
    minimum = INF;
    m = 0;
    for (i=1; i<nnode; i++){
        update = temp[start] +w[start] [i];

        if(update <temp[i] && visited[i] ==0){
            temp[i] = update;
            prev[i] = start;
        }
        if (minimum >temp[i] && visited[i] ==0){
            minimum = temp[i];
            m = i;
        }
    }
start = m;
visited[start] = 1;
}
min_bobot = temp[v];

start = v; j = 0;
while (start != -1) {
    path [j] = start;
    start = prev[start];
    j++;
}

for(int i = nnode - 1; i>=0; i--){
    if(path[i] !=0){
        cout <<path[i]<<" --> ";
    }
}
cout <<"\n";
cout<<"Nilai bobot "<<min_bobot<<endl;
}
