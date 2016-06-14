////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Machine Learning Library (EMLL)
//  File:     InputNode.tcc (model)
//  Authors:  Chuck Jacobs
//
////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename ValueType>
InputNode<ValueType>::InputNode(size_t dimension) : Node({}, {&_output}), _output(this, 0, dimension) 
{
};

template <typename ValueType>
void InputNode<ValueType>::SetInput(std::vector<ValueType> inputValues)
{
    _inputValues = inputValues;
}

template <typename ValueType>
void InputNode<ValueType>::Compute() const
{
    _output.SetOutput(_inputValues);
}
