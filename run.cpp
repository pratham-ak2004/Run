#include <iostream>
#include <getopt.h>

#define VERSION "1.0.1"
#define GITHUB_LINK "https://github.com/pratham-ak2004/Run"

using namespace std;

void display_help(char *argv[])
{
    // General Message
    std::cout << "Run (V " << VERSION << ") A simple CLI tool for Windows with pnpm commands reduced to conditional flags." << std::endl;
    std::cout << "How to install? Download the latest executable .exe file from " << GITHUB_LINK << " and add it to you PATH of the system." << std::endl;
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
    std::cout << "      -i <name>           : Install the dependency <name> [experimental]" << std::endl
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
    std::cout << "      -d                  : Generate Prisma Client" << std::endl;
    std::cout << "      -P                  : Sync database with schema (prisma db push)" << std::endl
              << std::endl;
}

void install_dependencies(char *argv[])
{
    cout << "Installing dependencies" << endl;
    system("pnpm install");
}

void run_dev_server(char *argv[])
{
    cout << "Running dev server" << endl;
    system("pnpm dev");
}

void host_dev_server(char *argv[])
{
    cout << "Hosting dev server" << endl;
    system("pnpm dev --host");
}

void build_project(char *argv[])
{
    cout << "Building project" << endl;
    system("pnpm run build");
}

void preview_project(char *argv[])
{
    build_project(argv);
    cout << "Running preview server" << endl;
    system("pnpm run preview");
}

void run_prisma_postinstall(char *argv[])
{
    cout << "Syncing database with prisma schema" << endl;
    system("pnpm prisma db push");
}

void run_prisma_generate_client(char *argv[])
{
    cout << "Generating Prisma Client" << endl;
    system("pnpm prisma generate");
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
            install_dependencies(argv);
            break;
        case 'r':
            run_dev_server(argv);
            break;
        case 'R':
            host_dev_server(argv);
            break;
        case 'b':
            build_project(argv);
            break;
        case 'p':
            preview_project(argv);
            break;
        case 'd':
            run_prisma_postinstall(argv);
            break;
        case 'P':
            run_prisma_generate_client(argv);
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
