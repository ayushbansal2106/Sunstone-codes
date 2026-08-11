# Online Shopping System

A Java-based online shopping system that implements core OOP concepts with a web-based frontend.

## Features

1. User Management
   - User registration and login
   - User roles (Admin and Customer)
   - Profile management

2. Product Management
   - Admins can add/edit/delete products
   - Product categorization
   - Product search and filtering
   - Product reviews and ratings

3. Shopping Cart
   - Add/remove items
   - Update quantities
   - View cart summary

4. Order Management
   - Place orders
   - Multiple payment methods (UPI, Debit Card, Credit Card, COD)
   - Order tracking
   - Order cancellation (if not shipped)

5. Address Management
   - Multiple shipping addresses
   - Separate billing address option
   - Address validation

## Project Structure

```
├── src/
│   ├── model/
│   │   ├── User.java
│   │   ├── Product.java
│   │   ├── ShoppingCart.java
│   │   ├── CartItem.java
│   │   ├── Order.java
│   │   ├── OrderItem.java
│   │   ├── Address.java
│   │   ├── Payment.java
│   │   └── Review.java
│   ├── service/
│   │   ├── UserService.java
│   │   ├── ProductService.java
│   │   ├── OrderService.java
│   │   └── PaymentService.java
│   └── util/
│       ├── DatabaseConnection.java
│       └── ValidationUtil.java
└── README.md
```

## Setup Instructions

1. Prerequisites
   - Java JDK 11 or higher
   - Maven
   - Web server (e.g., Apache Tomcat)

2. Database Setup
   - Create a MySQL database
   - Update database connection properties in `src/util/DatabaseConnection.java`

3. Build and Run
   ```bash
   # Clone the repository
   git clone [repository-url]

   # Navigate to project directory
   cd online-shopping-system

   # Build the project
   mvn clean install

   # Run the application
   mvn tomcat7:run
   ```

4. Access the Application
   - Open your web browser
   - Navigate to `http://localhost:8080`

## Technologies Used

- Backend:
  - Java
  - MySQL
  - Maven
  - Tomcat

- Frontend:
  - HTML5
  - CSS3
  - JavaScript

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details. 