<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registration Form</title>
    <style>
        .error { color: red; font-size: 12px; }
    </style>
</head>
<body>
    <h2>Registration Form</h2>
    <form id="registrationForm">
        Name: <input type="text" id="name"><span id="nameError" class="error"></span><br>
        Age: <input type="number" id="age"><span id="ageError" class="error"></span><br>
        Address: <input type="text" id="address"><span id="addressError" class="error"></span><br>
        Email: <input type="email" id="email"><span id="emailError" class="error"></span><br>

        Hobbies: 
        <input type="checkbox" name="hobby" value="Reading">Reading
        <input type="checkbox" name="hobby" value="Sports">Sports
        <input type="checkbox" name="hobby" value="Music">Music
        <span id="hobbyError" class="error"></span><br>

        Gender:
        <input type="radio" name="gender" value="Male">Male
        <input type="radio" name="gender" value="Female">Female
        <span id="genderError" class="error"></span><br>

        Country:
        <select id="country">
            <option value="">Select</option>
            <option value="USA">USA</option>
            <option value="India">India</option>
            <option value="Canada">Canada</option>
        </select>
        <span id="countryError" class="error"></span><br>

        <button type="submit">Submit</button>
        <button type="reset">Reset</button>
    </form>
    <script src="validate.js"></script>
</body>
</html>
