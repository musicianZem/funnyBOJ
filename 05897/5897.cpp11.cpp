#include<stdio.h>
#include<algorithm>
#define bnd 1e-8
#define x first
#define y second
using namespace std;
typedef pair<double, double> point;
point p1[1000], p2[1000],c;
int n,res;
double ccw(point i, point j, point k) {return (j.x - i.x)*(k.y - i.y) - (k.x - i.x)*(j.y - i.y);}
double dis(point i, point j) {return (i.x - j.x)*(i.x - j.x) + (i.y - j.y)*(i.y - j.y);}
int quad(point i) {
    if (i.x >= c.x && i.y >= c.y) return 0;
    if (i.y >= c.y) return 1;
    if (i.x <= c.x) return 2;
    return 3;
}
bool comp1(point i, point j) {
    int qi = quad(i), qj = quad(j);
    double r = ccw(c, i, j);
    return qi < qj || qi == qj && (r > bnd || r >-bnd && dis(c, i) < dis(c, j));
}
bool comp2(point i, point j) {
    int qi = quad(i), qj = quad(j);
    double r = ccw(c, i, j);
    return qi > qj || qi == qj && (r < -bnd || r <bnd && dis(c, i) < dis(c, j));
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &p1[i].x, &p1[i].y);
        c.x += p1[i].x;
        c.y += p1[i].y;
    }
    c.x /= n; c.y /= n;
    copy(p1, p1 + n, p2);
    sort(p1, p1 + n, comp1);
    sort(p2, p2 + n, comp2);
    for (int i = 0; i < n; i++) {
        if (abs(p1[i].x - c.x) < bnd&&abs(p1[i].y - c.y) < bnd) continue;
		double pA = (p1[i].x + p2[0].x) / 2;
		double pB = (p1[i].y + p2[0].y) / 2;
        point st; st.x = pA; st.y = pB;
        int h=(i+1)%n,t=1;
        for (; t < n; h = (h + 1) % n, t++) {
            if (abs((double)(p1[h].x - c.x)) < bnd && abs( (double)(p1[h].y - c.y) ) < bnd) h = (h + 1) % n;
            if (abs((double)(p2[t].x - c.x)) < bnd && abs( (double)(p2[t].y - c.y) ) < bnd) t++;
            if (t == n || abs(dis(c, p1[h]) - dis(c, p2[t])) > bnd
                || abs((double)(ccw(c, st, p1[h]) + ccw(c, st, p2[t]))) > bnd) break;
        }
        if (t == n) res++;
    }
    printf("%d", res);
    return 0;
}