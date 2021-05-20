
/**
 * @file      UserVector.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     User class of vector
 * @version   0.1
 * @date      20-05-2021
 * @copyright Copyright (c) 2021
 */

#include "UserVector.h"

UserVector::UserVector(size_t size) : size_{size}, vector_{new int32_t[size_]} {
  for (size_t i{}; i < size_; ++i) vector_[i] = 0;
}

UserVector::UserVector(const UserVector& other)
    : size_{other.size_}, vector_{new int32_t[size_]} {
  for (size_t i{}; i < size_; ++i) vector_[i] = other[i];
}

UserVector::UserVector(UserVector&& other)
    : size_{other.size_}, vector_{new int32_t[size_]} {
  vector_ = other.vector_;
  other.vector_ = nullptr;
}

void UserVector::push_back(int32_t value) {
  int32_t* newVector{new int32_t[++size_]};
  for (size_t i{}; i < size_ - 1; ++i) newVector[i] = vector_[i];
  newVector[size_ - 1] = value;
  delete[] vector_;
  vector_ = newVector;
}

void UserVector::pop_back() {
  int32_t* newVector{new int32_t[--size_]};
  for (size_t i{}; i < size_; ++i) {
    newVector[i] = vector_[i];
  }
  delete[] vector_;
  vector_ = newVector;
}

std::istream& operator>>(std::istream& in, UserVector& userVector) {
  for (size_t i{}; i < userVector.size(); ++i) in >> userVector[i];
  return in;
}

std::ostream& operator<<(std::ostream& out, const UserVector& userVector) {
  for (size_t i{}; i < userVector.size(); ++i) out << userVector[i] << " ";
  return out;
}