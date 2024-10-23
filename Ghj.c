/* General styles */
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
}

/* Showroom name styling */
.showroom-name {
    text-align: center;
    background-color: #333;
    color: white;
    padding: 20px;
}

/* Main container styling */
.main-container {
    display: flex;
    height: calc(100vh - 80px); /* Full height minus header */
}

/* Left side: Bike brands */
.brand-list {
    width: 20%;
    background-color: #f0f0f0;
    padding: 20px;
    position: sticky;
    top: 0;
    height: 100vh;
}

.brand-list ul {
    list-style-type: none;
    padding: 0;
}

.brand-list ul li {
    margin: 10px 0;
}

.brand-list ul li a {
    text-decoration: none;
    color: #000;
    font-weight: bold;
}

.brand-list ul li a:hover {
    color: #007BFF;
}

/* Right side: Bike models and specifications */
.models-specs {
    width: 80%;
    padding: 20px;
    background-color: #fff;
}

h1, h2 {
    margin: 0;
    padding-bottom: 10px;
}

.models-specs div {
    margin-bottom: 40px;
}
