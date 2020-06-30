#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "CandidateType.h"

#include <iostream>
#include <string>
#include <iomanip>

class Node
{
public:
	Node() : link(nullptr) {}
    Node(const CandidateType& newCandidate, Node *theLink) 
		: candidate(newCandidate), link(theLink){}
    Node* getLink( ) const { return link; }
	CandidateType getCandidate( ) const { return candidate; }
    void setCandidate(const CandidateType& newCandidate)
		{ candidate = newCandidate; }
    void setLink(Node *theLink) { link = theLink; }
	~Node() {}
private:
    CandidateType candidate;
    Node *link;		//pointer that points to next node
};

class CandidateList
{
public:
	// Default constructor
	CandidateList();

	// addCandidate
	void addCandidate(const CandidateType&);

	// getWinner
	int getWinner() const;

	// isEmpty
	bool isEmpty() const; 
	// searchCandidate
	bool searchCandidate(int) const;

	// printCandidateName
	void printCandidateName(int) const;
	// printAllCandidates
	void printAllCandidates() const;
	// printKingdomVotes
	void printKingdomVotes(int, int) const;
	// printCandidateTotalVotes
	void printCandidateTotalVotes(int) const;
	// printFinalResults
	void printFinalResults() const;

	// clearList
	void clearList();
	// Destructor
	~CandidateList();

private:
	// searchCandidate
	bool searchCandidate(int, Node*&) const;
	
	Node *first; 	// pointer to the first candidate in the list
	Node *last;		// pointer to last candidate in the list
	int count;		// number of candidates in the list	
};

#endif