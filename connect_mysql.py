
import mysql.connector

# Create connection
mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="your_password",
    database="testdb"
)

print("Connected to MySQL!")

# Create cursor
cursor = mydb.cursor()

# Run query
cursor.execute("SELECT * FROM users")

# Fetch results
for row in cursor.fetchall():
    print(row)