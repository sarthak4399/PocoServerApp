CREATE TABLE IF NOT EXISTS components (
    id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    quantity INTEGER NOT NULL,
    type TEXT,
    location TEXT
);
