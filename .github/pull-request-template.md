# Pull Request Template for SimpleServ

## Description

Please provide a clear and concise description of the changes in this PR. Include the purpose and any relevant context.

Example:
- Added a feature to serve files over HTTPS.
- Fixed a bug where large files caused a crash.
- Updated documentation for better clarity.

---

## Checklist

Please ensure the following before submitting your PR:

- [ ] Code follows the project's coding style and guidelines.
- [ ] Changes have been tested with both `wget` and `curl`.
- [ ] No sensitive information is included in the code or comments.
- [ ] All tests (if any) pass successfully.
- [ ] Documentation is updated (if applicable).

---

## Changes Made

Please list the specific changes made in this PR. Use bullet points for clarity.

Example:
- Added a file listing endpoint.
- Improved error handling for unsupported HTTP methods.
- Added unit tests for the file transfer feature.

---

## Testing Instructions

Describe the steps to test the changes. Include any required setup or dependencies.

Example:
1. Start the server with `./simpleserv`.
2. Use `curl -O http://localhost:8080/testfile.txt` to download a test file.
3. Verify the file downloads correctly.
4. Repeat the test with `wget`.

---

## Related Issues

Link any related issues or feature requests.

Example:
- Resolves #15: Add HTTPS support.
- Closes #8: Fix large file crash.

---

## Screenshots (if applicable)

If your PR includes UI or response changes, provide screenshots or examples for reference.

---

## Additional Notes

Add any additional context or notes relevant to the PR.
