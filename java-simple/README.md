# Simple Java App

Java is one of the primary languages used by Halodi Robotics, especially in our `whole body controller`.
Having a basic understanding of Java, being able to navigate the codebase, and updating config files are important skills.

## Challenge

This challenge uses a sample Java app and [`Gradle`](https://docs.gradle.org/) as the build tool.

Given the existing app, do the following:

1. Have the app print `Hello Halodians!` instead of `Hello world!`
2. Add a new test case that asserts that the "greeter" uses the correct string

### Prerequisites

- Install [Java 11 (OpenJDK 11)](https://adoptopenjdk.net/) if you don't have it already

### Usage

- Use the [Gradle wrapper](https://docs.gradle.org/6.8.3/userguide/gradle_wrapper.html) to run tasks
- The app can be run with `gradlew run`
- The tests can be run with `gradlew test`

See example usage below.
If you see `Hello world!`, then everything should be working.

```bash
# navigate to the local directory, e.g.:
cd ~/git/halodi-recruitment-challenges/java-simple

# macOS, linux, or git bash (windows)
$ ./gradlew run

> Task :run
Hello world!

BUILD SUCCESSFUL in 1s
2 actionable tasks: 1 executed, 1 up-to-date

# windows command prompt or powershell
C:\Users\nicholas\git\halodi-recruitment-challenges\java-simple>gradlew.bat run

> Task :run
Hello world!

BUILD SUCCESSFUL in 1s
2 actionable tasks: 1 executed, 1 up-to-date
```
