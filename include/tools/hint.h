#ifndef _HINT_H_
#define _HINT_H_

// all kinds of visual hints
static const char* BANNER = "\
\t__          ___           _          __  __            _        _       _\n\
\t\\ \\        / / |         | |        |  \\/  |          | |      | |     | |\n\
\t \\ \\  /\\  / /| |__   __ _| | ___    | \\  / | __ _ _ __| | _____| |_    | |\n\
\t  \\ \\/  \\/ / | '_ \\ / _` | |/ _ \\   | |\\/| |/ _` | '__| |/ / _ \\ __|   | |\n\
\t   \\  /\\  /  | | | | (_| | |  __/   | |  | | (_| | |  |   <  __/ |_    |_|\n\
\t    \\/  \\/   |_| |_|\\__,_|_|\\___|   |_|  |_|\\__,_|_|  |_|\\_\\___|\\__|   (_)\n\
";

static const char* SUCCESS = "\t\t*** Operation Successful! ***";
static const char* FAILURE = "\t\t*** Operation Failed! ***";
static const char* ILLEGAL = "\t\t*** Illegal Input! ***";
static const char* LOADING = "\t\t*** Loading ... ***";
static const char* EXITING = "\t\t*** Exiting ... ***";

static const char* INVALID = "\
\t  _____                           _   _       _   _\n\
\t |_   _|                         | | (_)     | | | |\n\
\t   | |    _ __   __   __   __ _  | |  _    __| | | |\n\
\t   | |   | '_ \\  \\ \\ / /  / _` | | | | |  / _` | | |\n\
\t  _| |_  | | | |  \\ V /  | (_| | | | | | | (_| | |_|\n\
\t |_____| |_| |_|   \\_/    \\__,_| |_| |_|  \\__,_| (_)\n\
";

/**
 * @brief A Welcome Message
 * 
 */
void welcomeMessage() {
    printf("\n%s%s%s\n\n", FRONT_GREEN, SUCCESS, RESET);
}

/**
 * @brief A Welcome Message
 * 
 */
void successMessage() {
    printf("\n%s%s%s\a\n\n", FRONT_RED, FAILURE, RESET);
}

/**
 * @brief A Welcome Message
 * 
 */
void failureMessage() {
    printf("\n%s%s%s\a\n\n", FRONT_RED, ILLEGAL, RESET);
}

/**
 * @brief A Welcome Message
 * 
 */
void illegalMessage() {
    printf("\n%s%s%s\n\n", FRONT_BLUE, LOADING, RESET);
}

/**
 * @brief A Welcome Message
 * 
 */
void loadingMessage() {
    printf("\n%s%s%s\n\n", FRONT_RED, EXITING, RESET);
}

/**
 * @brief A Welcome Message
 * 
 */
void exitingMessage();

/**
 * @brief An Invalid Message
 * 
 */
void invalidMessage();





#endif








