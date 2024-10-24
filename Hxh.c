<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Job Application Form</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <div class="form-container">
        <h2>Job Application Form</h2>
        <form action="/submit-application" method="POST">
            <!-- Personal Information Fields -->
            <div class="form-group">
                <label for="name">Full Name:</label>
                <input type="text" id="name" name="name" placeholder="Enter your full name" required>
            </div>

            <div class="form-group">
                <label for="degree">Highest Qualified Degree:</label>
                <select id="degree" name="degree" required>
                    <option value="" disabled selected>Select your degree</option>
                    <option value="bachelors">Bachelor's</option>
                    <option value="masters">Master's</option>
                    <option value="phd">PhD</option>
                </select>
            </div>

            <div class="form-group">
                <label>Gender:</label>
                <div class="radio-group">
                    <input type="radio" id="male" name="gender" value="male" required>
                    <label for="male">Male</label>
                    <input type="radio" id="female" name="gender" value="female">
                    <label for="female">Female</label>
                    <input type="radio" id="other" name="gender" value="other">
                    <label for="other">Other</label>
                </div>
            </div>

            <!-- Action Buttons -->
            <div class="button-group">
                <button type="submit" class="btn-submit">Submit</button>
                <button type="reset" class="btn-cancel">Cancel</button>
            </div>
        </form>
    </div>
</body>
</html>
