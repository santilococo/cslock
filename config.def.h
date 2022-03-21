/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
/* grid width and height for right center alignment */
//static const int logow = 12;
static const int logow = 14;
static const int logoh = 8;

static XRectangle rectangles[14] = {
	/* x    y       w       h */
    /* DWM LOGO
	{ 0,    3,      1,      3 },
	{ 1,    3,      2,      1 },
	{ 0,    5,      8,      1 },
	{ 3,    0,      1,      5 },
	{ 5,    3,      1,      2 },
	{ 7,    3,      1,      2 },
	{ 8,    3,      4,      1 },
	{ 9,    4,      1,      2 },
	{ 11,   4,      1,      2 },
	*/

    // I used https://www.khanacademy.org/computer-programming/rectx-y-width-height-radius/839496660 (but this values multiplied by 10)
	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 1,	5,	2,	1 },

	{ 4,	3,	1,	3 },
	{ 5,	3,	1,	1 },
	{ 5,	5,	1,	1 },
	{ 6,	3,	1,	3 },

	{ 8,	3,	1,	3 },
	{ 9,	3,	2,	1 },
	{ 9,	5,	2,	1 },

	{ 12,	3,	1,	3 },
	{ 13,	3,	1,	1 },
	{ 13,	5,	1,	1 },
	{ 14,	3,	1,	3 },
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;
