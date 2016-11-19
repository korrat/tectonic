/* lib.h: declare prototypes for functions in lib.a.
  Public domain. */

#ifndef LIB_LIB_H
#define LIB_LIB_H

/* basechsuffix.c */
extern string basenamechangesuffix (const_string, const_string, const_string);

/* chartostring.c */
extern string chartostring (char);

/* eofeoln.c */
extern boolean eof (FILE *);
extern boolean eoln (FILE *);
extern void readln (FILE *);

/* fprintreal.c */
extern void fprintreal (FILE *, double, int, int);

/* inputint.c */
extern integer inputint (FILE *);

/* input2int.c */
extern void zinput2ints (integer *, integer *);
extern void zinput3ints (integer *, integer *, integer *);

/* main.c (or win32main.c or texmfmp.c) */
#ifndef NOT_WEB2C
/* Only used in Web2C programs and possibly harmful otherwise.  */
extern int argc;
extern string *argv;
extern string cmdline (int);
extern void main_body (void); /* generated by web2c */
#endif

/* openclose.c */
extern boolean open_input (FILE **, int, const_string fopen_mode);
extern boolean open_output (FILE **, const_string fopen_mode);
extern void close_file (FILE *);
extern void recorder_change_filename (string);
extern void recorder_record_input (const_string);
extern void recorder_record_output (const_string);

extern string fullnameoffile;
extern boolean recorder_enabled;
extern string output_directory;

/* printversion.c */
extern void printversionandexit (const_string, const_string, const_string, const_string);

/* setupvar.c */
/* Set an array size from texmf.cnf.  */
extern void setup_bound_variable (integer *, const_string, integer);

/* version.c */
extern const char *version_string;

/* zround.c */
extern integer zround (double);

#endif /* not LIB_LIB_H */
