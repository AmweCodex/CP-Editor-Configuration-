# CP-Editor Configuration

This is my setup for the CP-Editor tool.

---

## C++ Compiler Commands

This is an almost optimal command for compiling C++ code with speed in mind:

```bash
g++ -std=c++17 -Wall -Wshadow -O3 -march=native -o "%e" "%f"
```

### Explanation of Flags

- `-std=c++17`: Specifies the C++ standard version.
- `-Wall`: Enables most of the commonly used warning messages.
- `-Wshadow`: Warns about variable shadowing.
- `-O3`: The highest level of optimization focusing on performance, which can make the compiled program faster. It performs more aggressive optimizations compared to `-O2`.
- `-march=native`: Optimizes the code for the architecture of the machine on which it's being compiled, potentially resulting in faster execution.
- `-o "%e"`: Specifies the output filename (`%e` is typically replaced by the output filename in some IDEs or build systems).
- `"%f"`: Refers to the input source file(s). Ensure to include this if it's required by your setup.

## Clang Format

### Program

Set the path to the `clang-format` executable, or simply use `clang-format` if it’s in the `PATH` environment variable.

download clang-fomat file here [.clang-formate](https://gist.github.com/idelsink/c25049d8c987890935f4)

```plaintext
D:/CP/clang-format/clang-format.exe
```

### Arguments

Specify the arguments passed to `clang-format`. It should **NOT** contain `-i` (the in-place modification option).

To link the `.clang-format` file that you created on your local machine in the "Clang Format Arguments" section, you can specify the path to your `.clang-format` file using the `-style` flag. Here's how you can do it:

1. **Locate the `.clang-format` file** on your local machine. Note the full path to this file.

2. **In the "Clang Format Arguments" field**, enter the following argument:

   ```plaintext
   -style=file
   ```

   By using `-style=file`, ClangFormat will automatically search for the `.clang-format` file in the directory of the file you're formatting or in one of its parent directories.

3. **If your `.clang-format` file is in a specific location and you want to specify the path directly**, you can do:

   ```plaintext
   -style=file:/path/to/.clang-format
   ```

   Replace `/path/to/.clang-format` with the actual path to your `.clang-format` file.

   Example:

   ```plaintext
   -style=file:D:/CP/clang-format/.clang-format
   ```

After doing this, ClangFormat will use the configuration specified in your `.clang-format` file for formatting.

## Setup Competitive Companion

[Competitive Companion](https://github.com/jmerle/competitive-companion) is used to parse problems/contests from online judges. After you install it, you can parse sample test cases with a single click, instead of copying them manually.

You can install it from the addon/extension markets:

- [Chrome Extension](https://chrome.google.com/webstore/detail/competitive-companion/cjnmckjndlpiamhfimnnjmnckgghkjbl)
- [Firefox Addon](https://addons.mozilla.org/en-US/firefox/addon/competitive-companion/)

## CF Tool

To submit Codeforces and other competitive programming platform problems in CP Editor, you need to install [CF Tool](https://github.com/xalanq/cf-tool).

You can use [CF Tool](https://github.com/xalanq/cf-tool/) to submit your solutions to [Codeforces](https://codeforces.com/) and other competitive programming platforms.

To submit a solution, you have to either parse a problem by [Competitive Companion](https://cpeditor.org/v6.11/docs/preferences/extensions/#competitive-companion) from Codeforces or manually set the problem URL of a tab in the context menu of it.

**See also** [Setup CF Tool](https://cpeditor.org/v6.11/docs/setup/#setup-cf-tool).

### Path

Set the path to the `cf` executable file, or simply use `cf` if it’s in the `PATH` environment variable.

For example:

```plaintext
D:/CP/cf-tool/cf.exe
```

## Setup WakaTime

You can use [WakaTime](https://wakatime.com/) to track your time usage.

If you are a Linux/macOS user and your distro provides the WakaTime CLI, it’s recommended to use it.

Otherwise, there are two options:

- The deprecated Python version. You can install it via `pip install wakatime`.
- The new Go version. You can download it at [https://github.com/wakatime/wakatime-cli/releases](https://github.com/wakatime/wakatime-cli/releases).

### For Clarity

Go to [WakaTime for Windows](https://wakatime.com/windows).

The Windows desktop app can track the time you spend in any app. It’s a catch-all if we don’t have a plugin for your IDE or app.

### Installing

1. Download [WakaTime for Windows](https://github.com/wakatime/desktop-wakatime/releases/latest).
2. Run it.
3. If prompted, enter your [API Key](https://wakatime.com/settings/api-key) then click `Save`.
4. Use your computer like normal, and your coding activity will be displayed on your [WakaTime Dashboard](https://wakatime.com/dashboard).
