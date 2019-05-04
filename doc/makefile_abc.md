 ## makefile自动化变量

 - `$@`: The filename representing the target.

 - `$%`: The filename element of an archive member specification.

 - `$<`: The filename of the first prerequisite.

 - `$?`: The names of all prerequisites that are newer than the target, separated
   by spaces.

 - `$^`: The filenames of all the prerequisites, separated by spaces. This list
   has duplicate filenames removed since for most uses, such as compiling,
   copying, etc., duplicates are not wanted. 
   > `$@`表示所有的目标的挨个值，`$<`表示了所有依赖目标的挨个值。

 - `$+`: Similar to $^, this is the names of all the prerequisites separated by
   spaces, except that $+ includes duplicates. This variable was created for
   specific situations such as arguments to linkers where duplicate values have
   meaning.

 - `$*`: The stem of the target filename. A stem is typically a filename without
   its suffix. Its use outside of pattern rules is discouraged.

## How to write VScode `launch.json`

Predefined variables#
The following predefined variables are supported:

- `${workspaceFolder}`: - the path of the folder opened in VS Code
- `${workspaceFolderBasename}`: - the name of the folder opened in VS Code without any slashes (/)
- `${file}`: - the current opened file
- `${fileWorkspaceFolder}`: - the current opened file's workspace folder
- `${relativeFile}`: - the current opened file relative to workspaceFolder
- `${relativeFileDirname}`: - the current opened file's dirname relative to workspaceFolder
- `${fileBasename}`: - the current opened file's basename
- `${fileBasenameNoExtension}`: - the current opened file's basename with no file extension
- `${fileDirname}`: - the current opened file's dirname
- `${fileExtname}`: - the current opened file's extension
- `${cwd}`: - the task runner's current working directory on startup
- `${lineNumber}`: - the current selected line number in the active file
- `${selectedText}`: - the current selected text in the active file
- `${execPath}`: - the path to the running VS Code executable
- `${defaultBuildTask}`: - the name of the default build task
- `${pathSeparator}`: - the character used by the operating system to separate components in file paths

<https://code.visualstudio.com/docs/editor/variables-reference>
