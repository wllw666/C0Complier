#ifndef _SYNTAX_ANALYSIS_H_
#define _SYNTAX_ANALYSIS_H_

using namespace std;

void syntax_init();
void program();

types expression(int *value);
void call(int i);
void statement();

#endif // !_SYNTAX_ANALYSIS_H_