* {
    box-sizing: border-box;
    margin: 0;
    padding: 0;
}

body {
    font-family: Arial, sans-serif;
    background-color: #f4f4f9;
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
}

.form-container {
    background-color: #ffffff;
    padding: 20px;
    border-radius: 8px;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
    max-width: 400px;
    width: 100%;
}

h2 {
    text-align: center;
    margin-bottom: 20px;
}

.form-group {
    margin-bottom: 15px;
}

label {
    display: block;
    font-weight: bold;
    margin-bottom: 5px;
}

input[type="text"],
select {
    width: 100%;
    padding: 10px;
    border: 1px solid #ccc;
    border-radius: 4px;
    font-size: 14px;
}

.radio-group {
    display: flex;
    gap: 10px;
}

input[type="radio"] {
    margin-right: 5px;
}

.button-group {
    display: flex;
    justify-content: space-between;
}

button {
    padding: 10px 15px;
    border: none;
    border-radius: 4px;
    font-size: 14px;
    cursor: pointer;
}

.btn-submit {
    background-color: #4CAF50;
    color: white;
}

.btn-cancel {
    background-color: #f44336;
    color: white;
}

button:hover {
    opacity: 0.8;
}

@media (max-width: 500px) {
    .form-container {
        padding: 15px;
    }

    button {
        width: 100%;
        margin-top: 10px;
    }

    .button-group {
        flex-direction: column;
    }
}
