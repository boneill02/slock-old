/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",     /* after initialization */
	[INPUT] =  "#10aa6b",   /* during input */
	[FAILED] = "#edaaaa",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
