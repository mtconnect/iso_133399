#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSize_formatType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSize_formatType



namespace cutting_tool_schema_arm
{

class CSize_formatType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CSize_formatType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CSize_formatType(CSize_formatType const& init);
	void operator=(CSize_formatType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSize_formatType); }
	MemberElement<CRectangular_size, _altova_mi_altova_CSize_formatType_altova_Rectangular_size> Rectangular_size;
	struct Rectangular_size { typedef Iterator<CRectangular_size> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSize_formatType
