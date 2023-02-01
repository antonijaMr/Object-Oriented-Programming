#pragma once
#include <iostream>
#include <initializer_list>
#include <algorithm>

class MojNizInt{
   public:
     MojNizInt(){}
     MojNizInt(size_t capacity):size_{0},capacity_{capacity}, p_{new int[capacity_]}{}
     MojNizInt(const std::initializer_list<int>& l): size_{l.size()},capacity_{2*size_},p_{new int[size_]}{
       std::copy(l.begin(), l.end(),p_); 
     }

     MojNizInt(const MojNizInt& other):size_{other.size_},capacity_{other.capacity_},p_{other.p_}{
       std::copy(other.p_,other.p_+size_,p_);
     }

     MojNizInt(MojNizInt&& other):size_{other.size_},capacity_{other.capacity_},p_{other.p_}{
       other.p_ = nullptr;
       other.capacity_ = 0;
       other.size_ = 0;
     }

     MojNizInt& operator=(const MojNizInt& other){
       if(this != &other){
         delete [] p_;
         p_ = new int[other.size_];
         size_ = other.size_;
         capacity_ = other.capacity_;
         std::copy(other.p_,other.p_+size_,p_);
       }
       return *this;
     }
 
     MojNizInt& operator=(MojNizInt&& other){
       delete [] p_;
       p_ = other.p_;
       size_ = other.size_;
       capacity_ = other.capacity_;
       other.p_ = nullptr;
       other.size_ = 0;
       return *this;
     }
     
   bool operator==(const MojNizInt& other) const{
     if(other.size() != size_) return false;
     bool res = true;
     for(int i = 0; i < size_; ++i){
       if(other[i] != p_[i])
         res = false;
     }
     return res;
   }

   bool operator!=(const MojNizInt& other) const{
     if(other.size() != size_) return false;
     bool res = true;
     for(int i = 0; i < size_; ++i){
       if(other[i] == p_[i])
         res = false;
     }
     return res;
   }
 
  MojNizInt& push_back(int element){
    if(p_ == nullptr){throw std::invalid_argument("empty");
    if(size_  == capacity_) throw std::invalid_argument("out of range");
    p_[size_++] = element;
    }
    return *this;
  }

    void pop_back(){ if(size_> 0) size_--; }
  
   MojNizInt& erase(size_t position){}

//   template <typename U>
//   bool operator==(const MojVektor<U>&) const;
//   template <typename U>
//   bool operator!=(const MojVektor<U>&) const;
//   friend std::ostream& operator<<(std::ostream& os, const MojVektor<T>&);
//   // Koristiti std::move()
//   MojVektor& push_back(T&& element);
//   MojVektor& push_front(const T& element);
//   // Koristiti std::move()
//   MojVektor& push_front(T&& element);
//   MojVektor& insert(size_t position, const T& element);
//   MojVektor& insert(size_t position, T&& element);
//   template <typename Predicate>
//   MojVektor& erase_if(Predicate predicate);

   int& operator[](size_t index) const{ return p_[index];}
   const int& operator[](size_t index) { return p_[index];}

   int& at(size_t index) {
     if(index<0 || index>= size_) throw std::invalid_argument("Out of range");
     else return p_[index];
   }
   
   const int& at(size_t index) const{
     if(index<0 || index>= size_) throw std::invalid_argument("Out of range");
     else return p_[index];
   }

   size_t size() const{ return size_; }

   void clear(){ size_ = 0;}

   bool empty() const{ return size_ == 0; }
   int& front(){ return p_[0]; }
   int& back(){ return p_[size_-1];}

  ~MojNizInt(){ delete [] p_; }

  private:
  size_t size_{0};
  size_t capacity_{0};
  int* p_{nullptr};
  };
