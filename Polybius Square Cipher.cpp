
// Program Name: Polybius Square Cipher.cpp
// Program Description: It is a cipher to cipher a text
// Last Modification Date: 22/3/2022
// Author: Sara Adel



#include <iostream>
#include <string>
#include <tuple>
using namespace std;
// put every character in tuple

tuple <int> a('A'); tuple <int> b('B'); tuple <int> c('C'); tuple <int> d('D'); tuple <int> e('E'); tuple <int> f('F'); tuple <int> g('G'); tuple <int> h('H'); tuple <int> j('J');
tuple <int> k('K'); tuple <int> l('L'); tuple <int> m('M'); tuple <int> n('N'); tuple <int> o('O'); tuple <int> p('P'); tuple <int> q('Q'); tuple <int> r('R');
tuple <int> s('S'); tuple <int> t('T'); tuple <int> u('U'); tuple <int> v('V'); tuple <int> w('W'); tuple <int> x('X'); tuple <int> y('Y'); tuple <int> z('Z');

int main() {
	int num1, num2, num3, num4, num5;
	//take the keys from the user
	cout << "enter the keys: " << endl;
	cout << "Key1: " << endl;
	cin >> num1;
	cout << "Key2: " << endl;
	cin >> num2;
	cout << "Key3: " << endl;
	cin >> num3; 
	cout << "Key4: " << endl;
	cin >> num4;
	cout << "Key5: " << endl;
	cin>> num5;
	// put the the keys in tuples
	tuple <int> number1(num1); tuple <int> number11(num1); tuple <int> number2(num2); tuple <int> number22(num2); tuple <int> number3(num3); tuple <int> number33(num3);
	tuple <int> number4(num4); tuple <int> number44(num4); tuple <int> number5(num5); tuple <int> number55(num5);
	// take the text from the user
		string text;
		cout << "please enter the text to encrypt: " << endl;
		cin >> text;
		// convert the lower characters to upper
		for (int i = 0; i <= text.length(); i++) {
			text[i] = toupper(text[i]);
			if (text[i] == 'A') {
				a.swap(number1);
				tuple <int, int> t1 = tuple_cat(a, number11);
				cout << get <0>(t1) << get <1>(t1);
				a.swap(number1);
			}
			else if (text[i] == 'B') {
				b.swap(number1);
				tuple <int, int> t2 = tuple_cat(b, number22);
				cout << get <0>(t2) << get <1>(t2);
				b.swap(number1);
			}
			else if (text[i] == 'C') {
				c.swap(number1);
				tuple <int, int> t3 = tuple_cat(c, number33);
				cout << get <0>(t3) << get <1>(t3);
				c.swap(number1);
			}
			else if (text[i] == 'D') {
				d.swap(number1);
				tuple <int, int> t4 = tuple_cat(d, number44);
				cout << get <0>(t4) << get <1>(t4);
				d.swap(number1);
			}
			else if (text[i] == 'E') {
				e.swap(number1);
				tuple <int, int> t5 = tuple_cat(e, number55);
				cout << get <0>(t5) << get <1>(t5);
				e.swap(number1);
			}
			else if (text[i] == 'F') {
				f.swap(number2);
				tuple <int, int> t6 = tuple_cat(f, number11);
				cout << get <0>(t6) << get <1>(t6);
				f.swap(number2);
			}
			else if (text[i] == 'G') {
				g.swap(number2);
				tuple <int, int> t7 = tuple_cat(g, number22);
				cout << get <0>(t7) << get <1>(t7);
				g.swap(number2);
			}
			else if (text[i] == 'G') {
				g.swap(number2);
				tuple <int, int> t7 = tuple_cat(g, number22);
				cout << get <0>(t7) << get <1>(t7);
				g.swap(number2);
			}
			else if (text[i] == 'H') {
				h.swap(number2);
				tuple <int, int> t8 = tuple_cat(h, number33);
				cout << get <0>(t8) << get <1>(t8);
				h.swap(number2);
			}
			else if (text[i] == 'I' or text[i] == 'J') {
				j.swap(number2);
				tuple <int, int> t9 = tuple_cat(j, number44);
				cout << get <0>(t9) << get <1>(t9);
				j.swap(number2);
			}
			else if (text[i] == 'K') {
				k.swap(number2);
				tuple <int, int> t10 = tuple_cat(k, number55);
				cout << get <0>(t10) << get <1>(t10);
				k.swap(number2);
			}
			else if (text[i] == 'L') {
				l.swap(number3);
				tuple <int, int> t11 = tuple_cat(l, number11);
				cout << get <0>(t11) << get <1>(t11);
				l.swap(number3);
			}
			else if (text[i] == 'M') {
				m.swap(number3);
				tuple <int, int> t12 = tuple_cat(m, number22);
				cout << get <0>(t12) << get <1>(t12);
				m.swap(number3);
			}
			else if (text[i] == 'N') {
				n.swap(number3);
				tuple <int, int> t13 = tuple_cat(n, number33);
				cout << get <0>(t13) << get <1>(t13);
				n.swap(number3);
			}
			else if (text[i] == 'O') {
				o.swap(number3);
				tuple <int, int> t14 = tuple_cat(o, number44);
				cout << get <0>(t14) << get <1>(t14);
				o.swap(number3);
			}
			else if (text[i] == 'P') {
				p.swap(number3);
				tuple <int, int> t15 = tuple_cat(p, number55);
				cout << get <0>(t15) << get <1>(t15);
				p.swap(number3);
			}
			else if (text[i] == 'Q') {
				q.swap(number4);
				tuple <int, int> t16 = tuple_cat(q, number11);
				cout << get <0>(t16) << get <1>(t16);
				q.swap(number4);
			}
			else if (text[i] == 'R') {
				r.swap(number4);
				tuple <int, int> t17 = tuple_cat(r, number22);
				cout << get <0>(t17) << get <1>(t17);
				r.swap(number4);
			}
			else if (text[i] == 'S') {
				s.swap(number4);
				tuple <int, int> t18 = tuple_cat(s, number33);
				cout << get <0>(t18) << get <1>(t18);
				s.swap(number4);
			}
			else if (text[i] == 'T') {
				t.swap(number4);
				tuple <int, int> t19 = tuple_cat(t, number44);
				cout << get <0>(t19) << get <1>(t19);
				t.swap(number4);
			}
			else if (text[i] == 'U') {
				u.swap(number4);
				tuple <int, int> t20 = tuple_cat(u, number55);
				cout << get <0>(t20) << get <1>(t20);
				u.swap(number4);
			}
			else if (text[i] == 'V') {
				v.swap(number5);
				tuple <int, int> t21 = tuple_cat(v, number11);
				cout << get <0>(t21) << get <1>(t21);
				v.swap(number5);
			}
			else if (text[i] == 'W') {
				w.swap(number5);
				tuple <int, int> t22 = tuple_cat(w, number22);
				cout << get <0>(t22) << get <1>(t22);
				w.swap(number5);
			}
			else if (text[i] == 'X') {
				x.swap(number5);
				tuple <int, int> t23 = tuple_cat(x, number33);
				cout << get <0>(t23) << get <1>(t23);
				x.swap(number5);
			}
			else if (text[i] == 'Y') {
				y.swap(number5);
				tuple <int, int> t24 = tuple_cat(y, number44);
				cout << get <0>(t24) << get <1>(t24);
				y.swap(number5);
			}
			else if (text[i] == 'Z') {
				z.swap(number5);
				tuple <int, int> t25 = tuple_cat(z, number55);
				cout << get <0>(t25) << get <1>(t25);
				z.swap(number5);
			}
		}











	}

