# DevOps CHOCOLATINE

Project Summary: 

This project aims to create a GitHub Actions workflow named "chocolatine.yml" to enforce good practices and diverse rules in a repository. The workflow should be usable with different Epitech projects and their respective technologies and tools. The workflow will implement a set of features, including checking the coding style, verifying program compilation, running tests, and pushing to a mirror repository.

Technical Details: 

The "chocolatine.yml" file should be placed either at the root of the repository or in the .github/workflows folder. The workflow must be self-contained and should use secrets for sensitive values. The only allowed external actions are actions/checkout and pixta-dev/repository-mirroring-action.

Environment Variables: 

You need to define environment variables, MIRROR_URL and EXECUTABLES, available at the workflow level.

Jobs:

1.  Check coding style (check_coding_style) - Runs in ghcr.io/epitech/coding-style-checker:latest Docker container, checks coding style errors, and displays error annotations.

2.  Check program compilation (check_program_compilation) - Launches make, make clean, and verifies the existence of specified executables. Runs in epitechcontent/epitest-docker Docker container.

3.  Run tests (run_tests) - Launches make tests_run with a 2-minute timeout. Runs in epitechcontent/epitest-docker Docker container.

4.  Push to mirror repository (push_to_mirror) - Mirrors the repository to the one specified in the MIRROR_URL environment variable using GIT_SSH_PRIVATE_KEY secret. Executes only when a push is made to the repository.

Evaluation: The workflow will be tested by copying the "chocolatine.yml" file into a test repository's .github/workflows directory.
