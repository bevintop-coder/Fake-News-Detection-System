CREATE DATABASE FakeNewsDB;

USE FakeNewsDB;

CREATE TABLE News (
    id INT AUTO_INCREMENT PRIMARY KEY,
    news_text VARCHAR(1000) NOT NULL,
    result VARCHAR(20) NOT NULL
);

INSERT INTO News (news_text, result)
VALUES 
('Alien spotted near the city', 'FAKE NEWS'),
('Government announces new education policy', 'REAL NEWS'),
('Secret rumor spreading on social media', 'FAKE NEWS'),
('Scientists discover a new planet', 'REAL NEWS');

SELECT * FROM News;
