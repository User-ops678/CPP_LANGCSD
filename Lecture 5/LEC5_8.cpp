#include "std_lib_facilities.h"

enum {jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
enum stream_state { good=1, fail=2, bad=4, eof=8 };
int flags=fail+eof;
stream_state s = flags;
stream_state s2 = stream_state(flags);