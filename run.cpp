#include <iostream>
#include <getopt.h>

#define VERSION "1.0.0"

using namespace std;

void display_help(char *argv[])
{
    // General Message
    std::cout << "Run (V " << VERSION << ") A simple CLI tool for Windows with pnpm commands reduced to conditional flags." << std::endl;
    std::cout << "How to install? Download the latest executable .exe file from Github and add it to you PATH of the system." << std::endl;
    std::cout << "Use multiple command flags to run them one after the other." << std::endl;
    std::cout << "[Important] Requires pnpm installed in the system. Install pnpm by running : winget install pnpm.pnpm" << std::endl
              << std::endl;

    // Usage message
    std::cout << "Usage: run [-h] [-v] [-i] [-r] [-R] [-b] [-p] [-d] [-P]" << std::endl
              << std::endl;

    // Version message
    std::cout << "Print version:            [-v] version" << std::endl
              << std::endl;

    // Help message
    std::cout << "Print help message:       [-h] Help" << std::endl
              << std::endl;

    // Install dependencies
    std::cout << "Mange dependencies:       [-i] Install dependencies" << std::endl;
    std::cout << "      -i                  : Run install script" << std::endl;
    std::cout << "      -i <name>           : Install the dependency <name>" << std::endl
              << std::endl;

    // Run dev server
    std::cout << "Run dev server:" << std::endl;
    std::cout << "      -r                  : Run dev server" << std::endl;
    std::cout << "      -R                  : Run hosted dev server" << std::endl
              << std::endl;

    // Build and preview
    std::cout << "Build and preview:" << std::endl;
    std::cout << "      -b                  : Build the project" << std::endl;
    std::cout << "      -p                  : Build and preview the project" << std::endl
              << std::endl;

    // Run prisma database
    std::cout << "Execute Database commandes:" << std::endl;
    std::cout << "      [Important]         Requires prisma installed in system or must be present as a dependency in your project" << std::endl;
    std::cout << "      -d                  : Run prisma postinstall script" << std::endl;
    std::cout << "      -P                  : Sync database with schema (prisma db push)" << std::endl
              << std::endl;
}

int main(int argc, char *argv[])
{
    int c;

    if (argc == 1)
    {
        printf("Run (V.%s)\n", VERSION);
        printf("No option selected. Use -h for help.\n");
        std::cout << "Usage: " << argv[0] << " [-h] [-i] [-r] [-R] [-b] [-p] [-d] [-P]" << std::endl;
        return 0;
    }

    while ((c = getopt(argc, argv, "hii:rRbpdPv")) != -1)
    {
        switch (c)
        {
        case 'h':
            display_help(argv);
            break;
        case 'i':
            cout << "Installing dependencies" << endl;
            break;
        case 'r':
            cout << "Running dev server" << endl;
            break;
        case 'R':
            cout << "Hosting dev server" << endl;
            break;
        case 'b':
            cout << "Building project" << endl;
            break;
        case 'p':
            cout << "Running preview server" << endl;
            break;
        case 'd':
            cout << "Run prisma postinstall script" << endl;
            break;
        case 'P':
            cout << "Sync database with prisma schema" << endl;
            break;
        case 'v':
            printf("Run (V.%s)\n", VERSION);
            return 0;
        case '?':
            return 1;
        default:
            cout << "Invalid option" << endl;
            return 1;
        }
    }

    return 0;
}
