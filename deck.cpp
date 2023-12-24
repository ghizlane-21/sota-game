#include "deck.h"
#include <algorithm> // For std::shuffle
#include <random>    // For std::default_random_engine

Deck::Deck()
{
    // Initialize the deck with 39 cards (adjust as needed)
    for (int i = 1; i <= 39; ++i)
    {
        QString imagePath = QString("C:/path/to/cards/card_%1.jpg").arg(i);  // Replace with your actual image paths
        Card card(i, imagePath);
        cards.push_back(card);
    }

    // Shuffle the deck
    shuffle();

    // Set the current card index to the beginning
    currentCardIndex = 0;
}

void Deck::shuffle()
{
    // Shuffle the cards using std::shuffle and std::default_random_engine
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

Card Deck::dealCard()
{
    if (!isEmpty())
    {
        // Deal the current card and move to the next one
        return cards[currentCardIndex++];
    }
    else
    {
        // Handle an empty deck (you may want to throw an exception or reset the deck)
        // For now, return an invalid card with value -1
        return Card(-1, "");
    }
}

bool Deck::isEmpty() const
{
    return currentCardIndex == cards.size();
}
