/* user and group to drop privileges to */
static const char *user  = "adam";
static const char *group = "adam";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;

/* default message */
static const char * message = "Input Password:";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-b&h-lucidabright-medium-r-normal--20-200-75-75-p-200-iso8859-1" ;
 	//-Misc-Fixed-Medium-R-Normal--20-200-75-75-C-100-ISO10646-1 
        //-misc-fixed-medium-r-semicondensed--13-120-75-75-c-60-iso8859-1
        //-bitstream-charter-medium-i-normal--0-0-75-75-p-0-iso8859-1

#define SCREENSLEEP
//#define SCREENSLEEPBACKLIGHT

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=10;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=30;
