# EECE2140 – Computing Fundamentals for Engineers

This repository contains my coursework for **EECE 2140**, including weekly classwork, exercises, and mini projects.

## Repository Structure

```
EECE2140-1/
├── Week1/
├── Week2/
│   └── Classwork/
├── Week3/
│   └── Classwork/
├── Week4/
│   └── Mini_Project1/
├── Week5/
├── .gitignore
└── README.md
```

## Getting Started

### Clone the repository

```bash
git clone https://github.com/AboKafta/EECE2140-1.git
cd EECE2140-1
```

### Run a program

Navigate to the week's folder and run the file you want, for example:

```bash
cd Week1
python filename.py
```

> Requires Python 3. Check your version with `python --version`.

## Git Workflow

### One-time setup

Only needed the first time you use Git on a computer:

```bash
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
git clone https://github.com/AboKafta/EECE2140-1.git
```

### Every time you add or change files

```bash
# 1. Go to the repo folder
cd path/to/EECE2140-1

# 2. Get the latest version from GitHub first
git pull

# 3. Check what's new or changed
git status

# 4. Stage your changes
git add .                     # stage everything
# or
git add Week6/filename.py     # stage one specific file

# 5. Commit with a short message describing what you did
git commit -m "Add Week 6 classwork"

# 6. Upload to GitHub
git push
```

### Useful extras

```bash
git log --oneline             # view commit history
git restore filename.py       # undo unsaved changes to a file (before git add)
git restore --staged file.py  # unstage a file (after git add, before commit)
```

> **Tip:** Git doesn't track empty folders. A new folder like `Week6/` only shows up on GitHub once it has at least one file in it.

## Author

**AboKafta**

## Notes

This repository is for educational purposes. If you are a current student in this course, please follow your course's academic integrity policy.
