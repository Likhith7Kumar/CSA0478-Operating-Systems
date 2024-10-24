document.getElementById("registrationForm").addEventListener("submit", function(event) {
    let valid = true;

    // Name validation
    const name = document.getElementById("name").value;
    if (!name.match(/^[A-Za-z\s]+$/)) {
        document.getElementById("nameError").textContent = "Name should contain only alphabets.";
        valid = false;
    } else {
        document.getElementById("nameError").textContent = "";
    }

    // Age validation
    const age = document.getElementById("age").value;
    if (age < 18 || age > 100 || isNaN(age)) {
        document.getElementById("ageError").textContent = "Age must be between 18 and 100.";
        valid = false;
    } else {
        document.getElementById("ageError").textContent = "";
    }

    // Address validation
    const address = document.getElementById("address").value;
    if (!address.trim()) {
        document.getElementById("addressError").textContent = "Address cannot be empty.";
        valid = false;
    } else {
        document.getElementById("addressError").textContent = "";
    }

    // Email validation
    const email = document.getElementById("email").value;
    const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if (!email.match(emailPattern)) {
        document.getElementById("emailError").textContent = "Invalid email format.";
        valid = false;
    } else {
        document.getElementById("emailError").textContent = "";
    }

    // Hobby validation
    const hobbies = document.querySelectorAll('input[name="hobby"]:checked');
    if (hobbies.length === 0) {
        document.getElementById("hobbyError").textContent = "Select at least one hobby.";
        valid = false;
    } else {
        document.getElementById("hobbyError").textContent = "";
    }

    // Gender validation
    const gender = document.querySelector('input[name="gender"]:checked');
    if (!gender) {
        document.getElementById("genderError").textContent = "Select your gender.";
        valid = false;
    } else {
        document.getElementById("genderError").textContent = "";
    }

    // Country validation
    const country = document.getElementById("country").value;
    if (country === "") {
        document.getElementById("countryError").textContent = "Please select a country.";
        valid = false;
    } else {
        document.getElementById("countryError").textContent = "";
    }

    // Prevent form submission if validation fails
    if (!valid) {
        event.preventDefault();
    }
});
