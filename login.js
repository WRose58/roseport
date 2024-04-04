.
        class User {
            constructor(username, password) {
                this.username = username;
                this.password = password;
            }

            authenticate(enteredUsername, enteredPassword) {
                return this.username === enteredUsername && this.password === enteredPassword;
            }
        }

        // Create an instance of the User class
        const validUser = new User('user', 'pass');

        function login() {
            // Get user input
            const enteredUsername = document.getElementById('username').value;
            const enteredPassword = document.getElementById('password').value;

            // Use the authenticate method of the User instance
            if (validUser.authenticate(enteredUsername, enteredPassword)) {
                alert('Login successful!');
            } else {
                alert('Login failed. Please check your username and password.');
            }
        }
    
