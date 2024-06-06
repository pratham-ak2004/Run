# Run
Run is a windows CLI package manager with basic commands shortened to conditional flags. It is build using [pnpm](https://pnpm.io/)

## Table of contents
- [Motive](#motive)
- [Tech-Stack](#tech-stack)
- [Installation](#installation)
- [Why pnpm?](#Why-pnpm)
- [Rules](#rules)
- [Commit-Message-Format](#commit-message-format)
- [License](#license)
- [Support](#Support)

## Motive
The motive of building <b>Run</b> is to create a package manager with commands as <u>short</u> as possible and <u>easy</u> to remember. Run using [pnpm](https://pnpm.io/) to manage and run the project while shortening its commands only to conditional flags.

## Tech-Stack
The tech stacks for building this CLI is listed below. More stacks are to be used which will be decided during the course of development.
- [c++](https://isocpp.org/)
- [pnpm](https://pnpm.io/)

## Installation
To start with the installtaion it is recommended to have [Git](https://git-scm.com/), [pnpm](https://pnpm.io/) and [g++ compiler](https://code.visualstudio.com/docs/languages/cpp) installed in the system. Follow the respective docs for their installation

step 1(optional): Check pnpm and g++ installation
```bash
pnpm --version
## output: 9.0.0 or above

g++ --version
# g++ (Rev6, Built by MSYS2 project) 13.2.0 or above
# Copyright (C) 2023 Free Software Foundation, Inc.
# This is free software; see the source for copying conditions.  There is NO
# warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

step 2: Clone the repository and move to the directory
```bash
git clone https://github.com/pratham-ak2004/Run
cd Run
```

step 3: Add project to your system path. This is to run the executable after building it.

step 4: Build from `.cpp` file
```bash
g++ run.cpp -o run.exe
```
## Why pnpm? <a id='Why-pnpm'></a>
We are using pnpm for this CLI because it have readable output messages and generates lock file in `.yml` format which is easy to interpret.

## Rules
some rules for contributions

- Follow the commit message format as mentioned in the [next section](#commit-message-format)
- Use meaningful names for identifiers while working on the project

## Commit-Message-Format
Each commit message consists of a <b>header</b>, a <b>body</b> and a <b>footer</b>. The header has a special format that includes a <b>type</b>, a <b>scope</b> and a <b>subject</b>:
```code
<type>(<scope>): <subject>
<BLANK LINE>
<body>
<BLANK LINE>
<footer>
```
The <b>header</b> is mandatory and the scope is optional

### Type
Your commit message should be one of the following types:
- <b>feat</b>: A new feature.
- <b>fix</b>: A bug fix.
- <b>docs</b>: Documentation only changes.
- <b>style</b>: Changes that do not affect the meaning of the code (white-space, formatting, missing semi-colons, etc).
- <b>refactor</b>: A code change that neither fixes a bug nor adds a feature.
- <b>perf</b>: A code change that improves performance.
- <b>test</b>: Adding missing tests.
- <b>chore</b>: Changes to the build process or auxiliary tools and libraries such as documentation generation.

### Imporatnt
your commit message must conatain atleast `type` and `subject`.

Ex: `feat: created navbar`

### Reference
For more information on commit message format, refer this [documention](https://gist.github.com/develar/273e2eb938792cf5f86451fbac2bcd51) by <b>develar</b>

## License
[![Licence](https://img.shields.io/github/license/Ileriayo/markdown-badges?style=for-the-badge)](./LICENSE)

## Support

Feel free to contact me <span style='font-size:1em;'>&#128522;</span>

[![Gmail](https://img.shields.io/badge/Gmail-EA4335.svg?style=for-the-badge&logo=Gmail&logoColor=white)](pratham20442@gmail.com)
[![Github](https://img.shields.io/badge/GitHub-181717.svg?style=for-the-badge&logo=GitHub&logoColor=white)](https://github.com/pratham-ak2004)
[![Linkdin](https://img.shields.io/badge/LinkedIn-0A66C2.svg?style=for-the-badge&logo=LinkedIn&logoColor=white)](https://www.linkedin.com/in/pratham-a-kadekar-8397a7249/)
[![Instagram](https://img.shields.io/badge/Instagram-E4405F.svg?style=for-the-badge&logo=Instagram&logoColor=white)](https://www.instagram.com/pratham_ak2004)
[![Twitter](https://img.shields.io/badge/Twitter-1D9BF0.svg?style=for-the-badge&logo=Twitter&logoColor=white)](https://twitter.com/a_kadekar1010)
[![BuyMeACoffee](https://img.shields.io/badge/Buy%20Me%20a%20Coffee-ffdd00?style=for-the-badge&logo=buy-me-a-coffee&logoColor=black)](https://www.buymeacoffee.com/pratham.ak2004) 